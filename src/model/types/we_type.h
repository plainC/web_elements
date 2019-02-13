#ifndef __WE_TYPE_H
#define __WE_TYPE_H

#ifndef WDEBUG_EXPAND
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <wondermacros/objects/api.h>
#endif

#include "we_fwd.h"

#include "we_type_class.h"
#include <wondermacros/objects/x/class_declare.h>


/*Unit Test*/

#ifndef W_TEST
# define W_TEST(...)
#endif

W_TEST(we_type,
    struct we_type* t = W_NEW(we_type);
    free(t);
)

#endif
