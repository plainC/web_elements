#ifndef __WE_STRING_H
#define __WE_STRING_H

#include "we.h"

#include "we_string_class.h"
#include <wondermacros/objects/x/class_declare.h>

/*Unit Test*/

#ifndef W_TEST
# define W_TEST(...)
#endif

W_TEST(we_string,
    struct we* w = W_NEW(we_string, .ptr = "Foobar");
    struct we_view_char_buffer* view =
        W_NEW(we_view_char_buffer, .root = w, .size=256);

    W_CALL(view,expand)(NULL);
    W_TEST_ASSERT(strcmp(view->buffer, W_OBJECT_AS(w,we_string)->ptr)==0, "String expansion failed");

    W_CALL_VOID(view,free);
)

#endif
