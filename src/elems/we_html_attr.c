#ifndef WDEBUG_EXPAND
# include <wondermacros/misc/unused.h>
#endif


#include "we_html_attr.h"

/* static const char* html_attr_name[] = { <names > }; */
#define W_NAME html_attr_name
#define W_NAME_INDEX 1
#define W_XFILE "elems/specs/html_attr_tags.h"
#include <wondermacros/x/string_name.h>
/**/

/* Begin class implementation. */
#include "we_html_attr_class.h"
#include <wondermacros/objects/x/class_start.h>


CONSTRUCT(we_html_attr) /* self */
{
}

FINALIZE(we_html_attr) /* self */
{
}

METHOD(we_html_attr,public,void,expand,
    (struct we_view* view, const struct we_model* model))
{
    W_CALL(view,write_str)(" ", 1);
    W_CALL(view,write_str)(html_attr_name[self->tag],strlen(html_attr_name[self->tag]));
    W_CALL(view,write_str)("=\"", 2);
    W_CALL(self->value,expand)(view, model);
    W_CALL(view,write_str)("\"", 1);
}

#include <wondermacros/objects/x/class_end.h>
