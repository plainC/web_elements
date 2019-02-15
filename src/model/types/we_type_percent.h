#ifndef __WE_TYPE_PERCENT_H
#define __WE_TYPE_PERCENT_H

#ifndef WDEBUG_EXPAND
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <wondermacros/objects/api.h>
#endif

#include "we_fwd.h"

#include "we_type.h"
#include "we_type_percent_class.h"
#include <wondermacros/objects/x/class_declare.h>

extern struct we_type* we_type_percent;

/*Unit Test*/

#ifndef W_TEST
# define W_TEST(...)
#endif

W_TEST(we_type_percent,
    struct we_type_percent* t = W_NEW(we_type_percent);
    char buffer[256];
    double p = 0.232562;
    W_CALL(t,to_string)(buffer,NULL,&p);
    W_TEST_ASSERT(strcmp(buffer,"23.26%") == 0, "Value mismatch");

    W_CALL_VOID(t,free);
)

#endif
