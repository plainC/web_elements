#ifndef WDEBUG_EXPAND
# include <stdio.h>
# include <stdlib.h>
# include <wondermacros/misc/unused.h>
# include <wondermacros/array/for_each.h>
# include <wondermacros/array/dynamic_array.h>
#endif


/* Include class header. */
#include "we_model.h"

/* Begin class implementation. */
#include "we_model_class.h"
#include <wondermacros/objects/x/class_start.h>


CONSTRUCT(we_model) /* self */
{
    W_CALL_VOID(self,add_scope);
}

FINALIZE(we_model) /* self */
{
    while (W_DYNAMIC_ARRAY_GET_SIZE(self->we_model.scopes))
        W_CALL_VOID(self,drop_scope);
    W_DYNAMIC_ARRAY_FREE(self->we_model.scopes);
}

METHOD(we_model,public,int,add_scope)
{
    struct we_model_scope* scope = malloc(sizeof(struct we_model_scope));
    scope->vars = NULL;
    W_DYNAMIC_ARRAY_PUSH(self->we_model.scopes, scope);

    return W_DYNAMIC_ARRAY_GET_SIZE(self->we_model.scopes);
}

METHOD(we_model,public,int,drop_scope)
{
    struct we_model_scope* scope = W_DYNAMIC_ARRAY_STEAL_LAST(self->we_model.scopes);
    W_DYNAMIC_ARRAY_FOR_EACH(struct we_var*, var, scope->vars) {
        free((void*) var->name);
        if (W_OBJECT_IS(var->type, we_type_array))
            W_CALL_VOID(var->type,free);
        free(var);
    }
    W_DYNAMIC_ARRAY_FREE(scope->vars);

    free(scope);
    return W_DYNAMIC_ARRAY_GET_SIZE(self->we_model.scopes);
}

METHOD(we_model,public,struct we_var*,get,
    (const char* name))
{
    for (int scope = W_DYNAMIC_ARRAY_GET_SIZE(self->we_model.scopes)-1; scope >= 0; --scope)
        W_DYNAMIC_ARRAY_FOR_EACH(struct we_var*,var, self->we_model.scopes[scope]->vars)
            if (strcmp(var->name, name) == 0)
                return var;
    return NULL;
}

METHOD(we_model,public,int,bind_ptr,
    (const char* name, const struct we_type* type, void* ptr))
{
    struct we_var* var;

    var = W_CALL(self,get)(name);
    if (var) {
        var->ptr = ptr;
        return 1;
    }
    var = malloc(sizeof(struct we_var));
    var->name = strdup(name);
    var->type = type;
    var->ptr = ptr;

    W_DYNAMIC_ARRAY_PUSH(W_DYNAMIC_ARRAY_PEEK_LAST(self->we_model.scopes)->vars, var);
    var = W_CALL(self,get)(name);

    return 0;
}

#include <wondermacros/objects/x/class_end.h>

