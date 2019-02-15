#ifndef WDEBUG_EXPAND
# include <wondermacros/misc/unused.h>
#endif


#include "we_elem_css_value_length.h"

/* static const char* unit_name[] = { <names > }; */
#define W_NAME       unit_name
#define W_NAME_INDEX 1
#define W_XFILE      "elems/specs/css_length_units.h"
#include <wondermacros/x/string_name.h>
/**/


/* Begin class implementation. */
#include "we_elem_css_value_length_class.h"
#include <wondermacros/objects/x/class_start.h>


CONSTRUCT(we_elem_css_value_length) /* self */
{
}

FINALIZE(we_elem_css_value_length) /* self */
{
}

METHOD(we_elem_css_value_length,public,void,expand,
    (struct we_view* view, const struct we_model* model))
{
    W_UNUSED(model);
    char buffer[256];
    int len = sprintf(buffer, "%g%s", self->length, unit_name[self->unit]);
    W_CALL(view,write_str)(buffer,len);
}

#include <wondermacros/objects/x/class_end.h>
