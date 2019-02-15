#ifndef WDEBUG_EXPAND
# include <wondermacros/misc/unused.h>
#endif


#include "we_elem_composite.h"

/* Begin class implementation. */
#include "we_elem_composite_class.h"
#include <wondermacros/objects/x/class_start.h>


CONSTRUCT(we_elem_composite) /* self */
{
}

FINALIZE(we_elem_composite) /* self */
{
    W_DYNAMIC_ARRAY_FOR_EACH(struct we*,elem,self->elems)
        W_CALL_VOID(elem,free);

    W_DYNAMIC_ARRAY_FREE(self->elems);
}

METHOD(we_elem_composite,public,void,append,
        (struct we* elem))
{
    W_DYNAMIC_ARRAY_PUSH(self->elems,elem);
}

METHOD(we_elem_composite,public,void,expand,
    (struct we_view* view, const struct we_model* model))
{
    W_UNUSED(model);

    W_DYNAMIC_ARRAY_FOR_EACH(struct we*,elem,self->elems)
        W_CALL(elem,expand)(view,model);
}

#include <wondermacros/objects/x/class_end.h>
