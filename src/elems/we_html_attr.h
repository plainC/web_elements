#ifndef __WE_HTML_ATTR_H
#define __WE_HTML_ATTR_H

#include "we.h"

/* Define enum we_html_attr_tag. */
#define W_NAME we_html_attr_tag
#define W_XFILE "elems/specs/html_attr_tags.h"
#include <wondermacros/x/enum.h>
/**/


#include "we_html_attr_class.h"
#include <wondermacros/objects/x/class_declare.h>

/*Unit Test*/

#ifndef W_TEST
# define W_TEST(...)
#endif

W_TEST(we_html_attr,
    struct we* s = W_NEW(we_string, .ptr = "foo");
    struct we* w = W_NEW(we_html_attr, .tag = we_html_attr_tag_id, .value=s);
    struct we_view_char_buffer* view =
        W_NEW(we_view_char_buffer, .root = w, .size=256);

    W_CALL(view,expand)(NULL);
    W_TEST_ASSERT(strcmp(view->buffer," id=\"foo\"")==0, "HTML attr expansion failed");

    W_CALL_VOID(view,free);
)

#endif
