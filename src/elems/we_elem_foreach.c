#ifndef WDEBUG_EXPAND
# include <wondermacros/misc/unused.h>
#endif
#include <wondermacros/tuples/tuple.h>


#include "we_elem_foreach.h"

/* Begin class implementation. */
#include "we_elem_foreach_class.h"
#include <wondermacros/objects/x/class_start.h>


CONSTRUCT(we_elem_foreach) /* self */
{
    self->elem = strdup(self->elem);
    self->name = strdup(self->name);
}

FINALIZE(we_elem_foreach) /* self */
{
    free(self->elem);
    free(self->name);
    W_CALL_VOID(self->next,free);
}

METHOD(we_elem_foreach,public,void,expand,
    (struct we_view* view, const struct we_model* model))
{
    struct we_var* var_array = W_CALL(model,get)(self->name);
    if (!var_array)
        W_CALL(view,write_str)("#NAME!",6);
    else {
        if (!var_array->type || !W_OBJECT_IS(var_array->type,we_type_array))
            W_CALL(view,write_str)("#TYPE!",6);
        else {
            W_CALL_VOID(model,add_scope);
            char buffer[256];
            int len = W_CALL(var_array->type,to_string)(buffer,"%d",W_TUPLE_NEW( (struct we_model*)(struct we_view*)(const char*)(void**)(struct we*),model,view,self->elem,*((void***) var_array->ptr),self->next));
            W_CALL_VOID(model,drop_scope);
            W_CALL(view,write_str)(buffer,len);
        }
    }
}

#include <wondermacros/objects/x/class_end.h>
