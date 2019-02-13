#ifndef WDEBUG_EXPAND
# include <wondermacros/misc/unused.h>
#endif


#include "we_elem_var.h"

/* Begin class implementation. */
#include "we_elem_var_class.h"
#include <wondermacros/objects/x/class_start.h>


CONSTRUCT(we_elem_var) /* self */
{
    self->name = strdup(self->name);
}

FINALIZE(we_elem_var) /* self */
{
    free(self->name);
}

METHOD(we_elem_var,public,void,expand,
    (struct we_view* view, const struct we_model* model))
{
    struct we_var* var = W_CALL(model,get)(self->name);
    if (!var)
        W_CALL(view,write_str)("#NAME!",6);
    else {
        if (!var->type)
            W_CALL(view,write_str)("#TYPE!",6);
        else {
           char buffer[256];
            int len = W_CALL(var->type,to_string)(buffer,self->format,var->ptr);
            W_CALL(view,write_str)(buffer,len);
        }
    }
}

#include <wondermacros/objects/x/class_end.h>
