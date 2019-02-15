#ifndef __WE_TYPE_STRING_H
#define __WE_TYPE_STRING_H

#ifndef WDEBUG_EXPAND
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <wondermacros/objects/api.h>
#endif

#include "we_fwd.h"

#include "we_type.h"
#include "we_type_string_class.h"
#include <wondermacros/objects/x/class_declare.h>

extern struct we_type* we_type_string;

/*Unit Test*/

#ifndef W_TEST
# define W_TEST(...)
#endif

W_TEST(we_type_string,
    struct we_type_string* t = W_NEW(we_type_string);
    char buffer[256];
    const char* str = "foobar";
    W_CALL(t,to_string)(buffer,NULL,&str);
    W_TEST_ASSERT(strcmp(buffer,"foobar") == 0, "Value mismatch");

    W_CALL_VOID(t,free);
)

#endif
