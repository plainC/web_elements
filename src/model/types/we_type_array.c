#ifndef WDEBUG_EXPAND
# include <wondermacros/misc/unused.h>
# include <wondermacros/array/dynamic_array.h>
#endif
#include <wondermacros/tuples/tuple.h>


/* Include class header. */
#include "we_type_array.h"
#include "model/we_model.h"
#include "elems/we.h"
#include "api/other_elems.h"


/* Begin class implementation. */
#include "we_type_array_class.h"
#include <wondermacros/objects/x/class_start.h>


CONSTRUCT(we_type_array) /* self */
{
    W_UNUSED(self);
}

FINALIZE(we_type_array) /* self */
{
    W_UNUSED(self);
}

METHOD(we_type_array,public,int,get_size)
{
    return sizeof(void*);
}

METHOD(we_type_array,public,int,to_string,
    (char* buffer, const char* format, void* data))
{
    W_UNUSED(format);

    int n=0;
    W_TUPLE_TYPE( (struct we_model*)(struct we_view*)(const char*)(void**)(struct we*) )* tuple = data;

    void* elemp;
    char index[strlen(W_TUPLE_ELEM(tuple,2))+4];
    sprintf(index, "%s_ix", W_TUPLE_ELEM(tuple,2));
    for (int i=0; i < W_DYNAMIC_ARRAY_GET_SIZE(W_TUPLE_ELEM(tuple,3)); i++) {
        elemp = W_REF_VOID_PTR(W_TUPLE_ELEM(tuple,3), i * W_CALL_VOID(self->elem_type,get_size));
        W_CALL(W_TUPLE_ELEM(tuple,0),bind_ptr)(index,weTYPE(int),&i);
        W_CALL(W_TUPLE_ELEM(tuple,0),bind_ptr)(W_TUPLE_ELEM(tuple,2),self->elem_type,elemp);
        W_CALL(W_TUPLE_ELEM(tuple,4),expand)(W_TUPLE_ELEM(tuple,1),W_TUPLE_ELEM(tuple,0));
    }

    return n;
}

#include <wondermacros/objects/x/class_end.h>
