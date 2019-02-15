#ifndef __WE_ELEM_COMPOSITE_H
#define __WE_ELEM_COMPOSITE_H

#include "we.h"
#include "we_elem_string.h"

#include "we_elem_composite_class.h"
#include <wondermacros/objects/x/class_declare.h>

/*Unit Test*/

#ifndef W_TEST
# define W_TEST(...)
#endif

W_TEST(we_elem_composite,
    struct we_elem_composite* w = W_NEW(we_elem_composite);
    W_CALL(w,append)(W_NEW(we_elem_string, .ptr = "foo"));
    W_CALL(w,append)(W_NEW(we_elem_string, .ptr = "bar"));
    struct we_view_char_buffer* view =
        W_NEW(we_view_char_buffer, .root = w, .size=256);

    W_CALL(view,expand)(NULL);
    W_TEST_ASSERT(strcmp(view->buffer, "foobar")==0, "Composite expansion failed");

    W_CALL_VOID(view,free);
)

#endif
