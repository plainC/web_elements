#ifndef WDEBUG_EXPAND
# include <wondermacros/misc/unused.h>
#endif


#include "we_elem_css_value_color_named.h"


/* static const char* html_attr_name[] = { <names > }; */
#define W_NAME  color_name
#define W_XFILE "elems/specs/css_color_names.h"
#include <wondermacros/x/string_name.h>
/**/

/* static const size_t color_len[] = { ... }; */
#define W_NAME       color_len
#define W_TYPE       size_t
#define W_INFIX(e)   sizeof(# e)-1
#define W_XFILE      "elems/specs/css_color_names.h"
#include <wondermacros/x/value_array.h>

/**/


/* Begin class implementation. */
#include "we_elem_css_value_color_named_class.h"
#include <wondermacros/objects/x/class_start.h>


CONSTRUCT(we_elem_css_value_color_named) /* self */
{
}

FINALIZE(we_elem_css_value_color_named) /* self */
{
}

METHOD(we_elem_css_value_color_named,public,void,expand,
    (struct we_view* view, const struct we_model* model))
{
    W_UNUSED(model);
    W_CALL(view,write_str)(color_name[self->color_tag],color_len[self->color_tag]);
}

#include <wondermacros/objects/x/class_end.h>
