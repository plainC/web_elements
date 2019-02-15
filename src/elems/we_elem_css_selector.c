#ifndef WDEBUG_EXPAND
# include <wondermacros/misc/unused.h>
#endif


#include "we_elem_css_selector.h"


/* Begin class implementation. */
#include "we_elem_css_selector_class.h"
#include <wondermacros/objects/x/class_start.h>


CONSTRUCT(we_elem_css_selector) /* self */
{
}

FINALIZE(we_elem_css_selector) /* self */
{
}

METHOD(we_elem_css_selector,public,void,expand,
    (struct we_view* view, const struct we_model* model))
{
    W_UNUSED(model);

    W_CALL(view,write_str)("*",1);
}

#include <wondermacros/objects/x/class_end.h>
