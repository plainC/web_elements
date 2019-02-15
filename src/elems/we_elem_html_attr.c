#ifndef WDEBUG_EXPAND
# include <wondermacros/misc/unused.h>
#endif


#include "we_elem_html_attr.h"

/* static const char* html_attr_name[] = { <names > }; */
#define W_NAME       html_attr_name
#define W_NAME_INDEX 1
#define W_XFILE      "elems/specs/html_attr_tags.h"
#include <wondermacros/x/string_name.h>
/**/


/* static const size_t color_len[] = { ... }; */
#define W_NAME       html_attr_len
#define W_NAME_INDEX 1
#define W_TYPE       size_t
#define W_INFIX(e)   sizeof(# e)-1
#define W_XFILE      "elems/specs/html_attr_tags.h"
#include <wondermacros/x/value_array.h>
/**/


/* Begin class implementation. */
#include "we_elem_html_attr_class.h"
#include <wondermacros/objects/x/class_start.h>


CONSTRUCT(we_elem_html_attr) /* self */
{
}

FINALIZE(we_elem_html_attr) /* self */
{
    W_CALL_VOID(self->value,free);
}

METHOD(we_elem_html_attr,public,void,expand,
    (struct we_view* view, const struct we_model* model))
{
    W_CALL(view,write_str)(" ", 1);
    W_CALL(view,write_str)(html_attr_name[self->tag],html_attr_len[self->tag]);
    W_CALL(view,write_str)("=\"", 2);
    W_CALL(self->value,expand)(view, model);
    W_CALL(view,write_str)("\"", 1);
}

#include <wondermacros/objects/x/class_end.h>
