#ifndef __WE_H
#define __WE_H

#ifndef WDEBUG_EXPAND
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>

# include <boost/preprocessor/variadic/size.hpp>
# define W_OBJECT_CAST_TO_VOID
# include <wondermacros/objects/api.h>
# include <wondermacros/array/dynamic_array.h>
#endif

#include "../model/all.h"
#include "../model/types/all.h"
#include "../view/we_view.h"
#include "../view/all.h"
#include "we_fwd.h"

#include "we_class.h"
#include <wondermacros/objects/x/class_declare.h>

/*Unit Test*/

#ifndef W_TEST
# define W_TEST(...)
#endif

#ifndef W_TEST_GROUP
# define W_TEST_GROUP(...)
#endif

W_TEST_GROUP("Element Tests")


#endif
