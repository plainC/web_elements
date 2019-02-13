#ifndef __WE_HTML_ELEM_H
#define __WE_HTML_ELEM_H

#include "we.h"
#include "we_html_attr.h"

/* Define enum we_html_elem_tag. */
#define W_NAME we_html_elem_tag
#define W_XFILE "elems/specs/html_elem_tags.h"
#include <wondermacros/x/enum.h>
/**/


#include "we_html_elem_class.h"
#include <wondermacros/objects/x/class_declare.h>

/*Unit Test*/

#ifndef W_TEST
# define W_TEST(...)
#endif

W_TEST(we_html_elem,
    struct we* w = W_NEW(we_html_elem, .tag = we_html_elem_tag_br);
    struct we_view_char_buffer* view =
        W_NEW(we_view_char_buffer, .root = w, .size=256);

    W_CALL(view,expand)(NULL);
    W_TEST_ASSERT(strcmp(view->buffer,"<br>")==0, "HTML <br> expansion failed");

    W_CALL_VOID(view,free);
)

#endif
