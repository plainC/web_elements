#ifndef __WE_TYPE_TIME_T_H
#define __WE_TYPE_TIME_T_H

#ifndef WDEBUG_EXPAND
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <time.h>
# include <wondermacros/objects/api.h>
#endif

#include "we_fwd.h"

#include "we_type.h"
#include "we_type_time_t_class.h"
#include <wondermacros/objects/x/class_declare.h>


/*Unit Test*/

#ifndef W_TEST
# define W_TEST(...)
#endif

W_TEST(we_type_time_t,
    struct we_type_time_t* t = W_NEW(we_type_time_t);
    char buffer[256];
    time_t ti;
    ti = time(NULL);
    W_CALL(t,to_string)(buffer,NULL,&ti);

    W_CALL_VOID(t,free);
)

#endif
