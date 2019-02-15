#ifndef __WE_ELEM_COND_H
#define __WE_ELEM_COND_H

#include "we.h"

#include "we_elem_cond_class.h"
#include <wondermacros/objects/x/class_declare.h>

/*Unit Test*/

#ifndef W_TEST
# define W_TEST(...)
#endif

#if 0
W_TEST(we_elem_cond,
    struct we* w = W_NEW(we_elem_cond, .name = "x", .format="%d", .child = W_NEW(we_string, .ptr = "Foobar"));
    struct we_view_char_buffer* view =
        W_NEW(we_view_char_buffer, .root = w, .size=256);
    struct we_type* type = W_NEW(we_type_int);
    struct we_model* model = W_NEW(we_model);
    int i=1;
    W_CALL(model,bind_ptr)("x",type,&i);

    W_CALL(view,expand)(model);
    W_TEST_ASSERT(strcmp(view->buffer, "Foobar")==0, "Cond expansion failed");
    i=0;
    W_CALL(view,expand)(model);
    W_TEST_ASSERT(strcmp(view->buffer, "")==0, "Cond expansion failed");

    W_CALL_VOID(view,free);
    W_CALL_VOID(model,free);
    W_CALL_VOID(type,free);
)
#endif

#endif
