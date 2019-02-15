#ifndef WDEBUG_EXPAND
# include <wondermacros/misc/unused.h>
#endif


#include "we_elem_cond.h"

/* Begin class implementation. */
#include "we_elem_cond_class.h"
#include <wondermacros/objects/x/class_start.h>


CONSTRUCT(we_elem_cond) /* self */
{
    self->name = strdup(self->name);
}

FINALIZE(we_elem_cond) /* self */
{
    free(self->name);
    W_CALL_VOID(self->child,free);
}

METHOD(we_elem_cond,public,void,expand,
    (struct we_view* view, const struct we_model* model))
{
    struct we_var* var = W_CALL(model,get)(self->name);
    if (!var)
        W_CALL(view,write_str)("#NAME!",6);
    else {
        if (!var->type || !W_OBJECT_IS(var->type,we_type_int))
            W_CALL(view,write_str)("#TYPE!",6);
        else {
            if (*((int*) var->ptr))
                W_CALL(self->child,expand)(view,model);
        }
    }
}

#include <wondermacros/objects/x/class_end.h>
