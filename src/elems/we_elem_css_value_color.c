#ifndef WDEBUG_EXPAND
# include <wondermacros/misc/unused.h>
#endif


#include "we_elem_css_value_color.h"


/* Begin class implementation. */
#include "we_elem_css_value_color_class.h"
#include <wondermacros/objects/x/class_start.h>


CONSTRUCT(we_elem_css_value_color) /* self */
{
}

FINALIZE(we_elem_css_value_color) /* self */
{
}

METHOD(we_elem_css_value_color,public,void,expand,
    (struct we_view* view, const struct we_model* model))
{
    W_UNUSED(model);
    char buffer[8];
    sprintf(buffer, "#%02x%02x%02x", self->r, self->g, self->b);
    W_CALL(view,write_str)(buffer,7);
}

#include <wondermacros/objects/x/class_end.h>
