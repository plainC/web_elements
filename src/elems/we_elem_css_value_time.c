#ifndef WDEBUG_EXPAND
# include <wondermacros/misc/unused.h>
#endif


#include "we_elem_css_value_time.h"

const char* time_unit[] = {
    "s",
    "ms",
};


/* Begin class implementation. */
#include "we_elem_css_value_time_class.h"
#include <wondermacros/objects/x/class_start.h>


CONSTRUCT(we_elem_css_value_time) /* self */
{
}

FINALIZE(we_elem_css_value_time) /* self */
{
}

METHOD(we_elem_css_value_time,public,void,expand,
    (struct we_view* view, const struct we_model* model))
{
    W_UNUSED(model);
    char buffer[256];
    int len = sprintf(buffer, "%g%s", self->length, time_unit[self->unit]);
    W_CALL(view,write_str)(buffer,len);
}

#include <wondermacros/objects/x/class_end.h>
