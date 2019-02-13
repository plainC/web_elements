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
    free(w);
)

#endif
