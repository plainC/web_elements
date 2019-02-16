#ifndef __WE_TYPE_ARRAY_H
#define __WE_TYPE_ARRAY_H

#ifndef WDEBUG_EXPAND
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <wondermacros/objects/api.h>
#endif

#include "we_fwd.h"

#include "we_type.h"
#include "we_type_array_class.h"
#include <wondermacros/objects/x/class_declare.h>

extern struct we_type* we_type_array;

/*Unit Test*/

#ifndef W_TEST
# define W_TEST(...)
#endif

#endif
