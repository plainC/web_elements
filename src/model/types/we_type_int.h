#ifndef __WE_TYPE_INT_H
#define __WE_TYPE_INT_H

#ifndef WDEBUG_EXPAND
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <wondermacros/objects/api.h>
#endif

#include "we_fwd.h"

#include "we_type.h"
#include "we_type_int_class.h"
#include <wondermacros/objects/x/class_declare.h>

extern struct we_type* we_type_int;

/*Unit Test*/

#ifndef W_TEST
# define W_TEST(...)
#endif

W_TEST(we_type_int,
    struct we_type_int* t = W_NEW(we_type_int);
    char buffer[256];
    int i = 42;
    W_CALL(t,to_string)(buffer,NULL,&i);
    W_TEST_ASSERT(strcmp(buffer,"42") == 0, "Value mismatch");

    W_CALL_VOID(t,free);
)

#endif
