#ifndef __WE_ELEM_HTML_H
#define __WE_ELEM_HTML_H

#include "we_fwd.h"

#include "we.h"
#include "we_elem_html_attr.h"

/* Define enum we_html_elem_tag. */
#define W_NAME we_elem_html_tag
#define W_XFILE <web_elements/elems/specs/html_elem_tags.h>
#include <wondermacros/x/enum.h>
/**/


#include "we_elem_html_class.h"
#include <wondermacros/objects/x/class_declare.h>

/*Unit Test*/

#ifndef W_TEST
# define W_TEST(...)
#endif

W_TEST(we_elem_html,
    struct we* w = W_NEW(we_elem_html, .tag = we_elem_html_tag_br);
    struct we_view_char_buffer* view =
        W_NEW(we_view_char_buffer, .root = w, .size=256);

    W_CALL(view,expand)(NULL);
    W_TEST_ASSERT(strcmp(view->buffer,"<br>")==0, "HTML <br> expansion failed");

    W_CALL_VOID(view,free);
)

#endif
