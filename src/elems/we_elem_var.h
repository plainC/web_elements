#ifndef __WE_ELEM_VAR_H
#define __WE_ELEM_VAR_H

#include "we.h"

#include "we_elem_var_class.h"
#include <wondermacros/objects/x/class_declare.h>

/*Unit Test*/

#ifndef W_TEST
# define W_TEST(...)
#endif

W_TEST(we_elem_var,
    struct we* w = W_NEW(we_elem_var, .name = "x", .format="%d");
    struct we_view_char_buffer* view =
        W_NEW(we_view_char_buffer, .root = w, .size=256);
    struct we_type* type = W_NEW(we_type_int);
    struct we_model* model = W_NEW(we_model);
    int i=42;
    W_CALL(model,bind_ptr)("x",type,&i);

    W_CALL(view,expand)(model);
    W_TEST_ASSERT(strcmp(view->buffer, "42")==0, "String expansion failed");

    W_CALL_VOID(view,free);
    W_CALL_VOID(model,free);
    W_CALL_VOID(type,free);
)

#endif
