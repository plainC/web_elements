#ifndef WDEBUG_EXPAND
# include <wondermacros/misc/unused.h>
#endif


#include "we_elem_css_property.h"

/* static const char* css_property_name[] = { <names > }; */
#define W_NAME css_property_name
#define W_NAME_INDEX 1
#define W_TYPE       const char*
#define W_XFILE      "elems/specs/css_properties.h"
#include <wondermacros/x/value_array.h>

/**/


/* Begin class implementation. */
#include "we_elem_css_property_class.h"
#include <wondermacros/objects/x/class_start.h>


CONSTRUCT(we_elem_css_property) /* self */
{
}

FINALIZE(we_elem_css_property) /* self */
{
}

METHOD(we_elem_css_property,public,void,expand,
    (struct we_view* view, const struct we_model* model))
{
    W_UNUSED(model);

    W_CALL(view,write_str)(css_property_name[self->tag],strlen(css_property_name[self->tag]));
}

#include <wondermacros/objects/x/class_end.h>
