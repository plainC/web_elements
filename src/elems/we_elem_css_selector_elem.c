#ifndef WDEBUG_EXPAND
# include <wondermacros/misc/unused.h>
#endif


#include "we_elem_css_selector_elem.h"


/* Begin class implementation. */
#include "we_elem_css_selector_elem_class.h"
#include <wondermacros/objects/x/class_start.h>


CONSTRUCT(we_elem_css_selector_elem) /* self */
{
}

FINALIZE(we_elem_css_selector_elem) /* self */
{
    W_DYNAMIC_ARRAY_FOR_EACH(const char*, e, self->elems)
        free((void*) e);

    W_DYNAMIC_ARRAY_FREE(self->elems);
}

METHOD(we_elem_css_selector_elem,public,void,expand,
    (struct we_view* view, const struct we_model* model))
{
    W_UNUSED(model);

    W_DYNAMIC_ARRAY_FOR_EACH(const char*, e, self->elems) {
        if (e_ix)
            W_CALL(view,write_str)(", ",2);
        W_CALL(view,write_str)(e,strlen(e));
    }
}

#include <wondermacros/objects/x/class_end.h>
