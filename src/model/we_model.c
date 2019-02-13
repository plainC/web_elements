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
    self->vars = NULL;
}

FINALIZE(we_model) /* self */
{
    W_ARRAY_FOR_EACH(struct we_var*,var, self->vars) {
        free((void*) var->name);
        free(var);
    }
}

METHOD(we_model,public,struct we_var*,get,
    (const char* name))
{
    W_ARRAY_FOR_EACH(struct we_var*,var, self->vars, W_DYNAMIC_ARRAY_GET_SIZE(self->vars))
        if (strcmp(var->name, name) == 0)
            return var;
    return NULL;
}

METHOD(we_model,public,int,bind_ptr,
    (const char* name, const struct we_type* type, void* ptr))
{
    struct we_var* var = malloc(sizeof(struct we_var));
    var->name = strdup(name);
    var->type = type;
    var->ptr = ptr;

    W_ARRAY_FOR_EACH(struct we_var*,v, self->vars, W_DYNAMIC_ARRAY_GET_SIZE(self->vars))
        if (strcmp(v->name, name) == 0) {
            free(v);
            self->vars[v_ix] = var;
            return 1;
        }

    W_DYNAMIC_ARRAY_PUSH(self->vars, var);
    return 0;
}

#include <wondermacros/objects/x/class_end.h>
