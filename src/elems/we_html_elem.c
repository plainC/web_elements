#ifndef WDEBUG_EXPAND
# include <wondermacros/misc/unused.h>
#endif


#include "we_html_elem.h"

/* static const char* html_elem_name[] = { <names > }; */
#define W_NAME html_elem_name
#define W_XFILE "elems/specs/html_elem_tags.h"
#include <wondermacros/x/string_name.h>

/**/

enum html_elem_flag {
    HTML_ELEM_FLAG_NONE         = 0,
    HTML_ELEM_FLAG_SELF_CLOSING = 1,
    HTML_ELEM_FLAG_BLOCK        = 2,
    HTML_ELEM_FLAG_INLINE       = 4,
    HTML_ELEM_FLAG_META         = 8,
    HTML_ELEM_FLAG_DEPRECATED   = 16,
    HTML_ELEM_FLAG_EXPERIMENTAL = 32,
};

/**/

/**/

/* static enum html_elem_flag html_elem_flags[] = { <flags > }; */
#define INLINE HTML_ELEM_FLAG_INLINE |
#define BLOCK HTML_ELEM_FLAG_BLOCK |
#define META HTML_ELEM_FLAG_META |
#define DEPRECATED HTML_ELEM_FLAG_DEPRECATED |
#define EXPERIMENTAL HTML_ELEM_FLAG_EXPERIMENTAL |
#define SELF_CLOSING HTML_ELEM_FLAG_SELF_CLOSING |

#define W_NAME       html_elem_flags
#define W_NAME_INDEX 1
#define W_TYPE       enum html_elem_flag
#define W_POSTFIX    HTML_ELEM_FLAG_NONE
#define W_XFILE      "elems/specs/html_elem_tags.h"
#include <wondermacros/x/value_array.h>

#undef INLINE
#undef DEPRECATED
#undef SELF_CLOSING
#undef META
#undef BLOCK
#undef EXPERIMENTAL
/**/

/* Begin class implementation. */
#include "we_html_elem_class.h"
#include <wondermacros/objects/x/class_start.h>


CONSTRUCT(we_html_elem) /* self */
{
}

FINALIZE(we_html_elem) /* self */
{
}

METHOD(we_html_elem,public,void,expand,
    (struct we_view* view, const struct we_model* model))
{
    W_CALL(view,write_str)("<", 1);
    W_CALL(view,write_str)(html_elem_name[self->tag],strlen(html_elem_name[self->tag]));
    W_DYNAMIC_ARRAY_FOR_EACH(struct we_html_attr*, attr, self->attrs)
        W_CALL(attr,expand)(view, model);
    W_CALL(view,write_str)(">", 1);
    if (!(html_elem_flags[self->tag] & HTML_ELEM_FLAG_SELF_CLOSING)) {
        W_DYNAMIC_ARRAY_FOR_EACH(struct we*, elem, self->next)
            W_CALL(elem,expand)(view, model);
        W_CALL(view,write_str)("</", 2);
        W_CALL(view,write_str)(html_elem_name[self->tag],strlen(html_elem_name[self->tag]));
        W_CALL(view,write_str)(">", 1);
    }
}

#include <wondermacros/objects/x/class_end.h>
