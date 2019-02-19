#ifndef __WE_VIEW_H
#define __WE_VIEW_H

#ifndef WDEBUG_EXPAND
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>

# include <boost/preprocessor/variadic/size.hpp>
# define W_OBJECT_CAST_TO_VOID
# include <wondermacros/objects/api.h>
# include <wondermacros/array/dynamic_array.h>
#endif

#include "model/we_fwd.h"
#include "view/we_fwd.h"
#include "elems/we.h"
#include "we_fwd.h"
#include "we_view_class.h"
#include <wondermacros/objects/x/class_declare.h>

/*Unit Test*/

#ifndef W_TEST
# define W_TEST(...)
#endif

#ifndef W_TEST_GROUP
# define W_TEST_GROUP(...)
#endif

W_TEST_GROUP("View Test")

W_TEST(we_view,
    struct we_view* view = W_NEW(we_view);

    W_CALL_VOID(view,free);
)

#endif
