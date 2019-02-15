#ifndef __WE_TYPE_DOUBLE_H
#define __WE_TYPE_DOUBLE_H

#ifndef WDEBUG_EXPAND
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <wondermacros/objects/api.h>
#endif

#include "we_fwd.h"

#include "we_type.h"
#include "we_type_double_class.h"
#include <wondermacros/objects/x/class_declare.h>

extern struct we_type* we_type_double;


/*Unit Test*/

#ifndef W_TEST
# define W_TEST(...)
#endif

W_TEST(we_type_double,
    struct we_type_double* t = W_NEW(we_type_double);
    char buffer[256];
    double pi = 3.14;
    W_CALL(t,to_string)(buffer,NULL,&pi);
    W_TEST_ASSERT(strcmp(buffer,"3.14") == 0, "Value mismatch");

    W_CALL_VOID(t,free);
)

#endif
