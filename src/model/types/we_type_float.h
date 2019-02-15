#ifndef __WE_TYPE_FLOAT_H
#define __WE_TYPE_FLOAT_H

#ifndef WDEBUG_EXPAND
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <wondermacros/objects/api.h>
#endif

#include "we_fwd.h"

#include "we_type.h"
#include "we_type_float_class.h"
#include <wondermacros/objects/x/class_declare.h>

extern struct we_type* we_type_float;

/*Unit Test*/

#ifndef W_TEST
# define W_TEST(...)
#endif

W_TEST(we_type_float,
    struct we_type_float* t = W_NEW(we_type_float);
    char buffer[256];
    float f = 42.3f;
    W_CALL(t,to_string)(buffer,NULL,&f);
    W_TEST_ASSERT(strcmp(buffer,"42.30") == 0, "Value mismatch");

    W_CALL_VOID(t,free);
)

#endif
