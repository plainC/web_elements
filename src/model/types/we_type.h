#ifndef __WE_TYPE_H
#define __WE_TYPE_H

#ifndef WDEBUG_EXPAND
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# define W_OBJECT_CAST_TO_VOID
# include <wondermacros/objects/api.h>
#endif

#include "we_fwd.h"

#include "we_type_class.h"
#include <wondermacros/objects/x/class_declare.h>


/*Unit Test*/

#ifndef W_TEST_GROUP
# define W_TEST_GROUP(...)
#endif

W_TEST_GROUP("Model/Types");

#endif
