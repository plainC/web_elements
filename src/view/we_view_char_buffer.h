#ifndef __WE_VIEW_CHAR_BUFFER_H
#define __WE_VIEW_CHAR_BUFFER_H

#ifndef WDEBUG_EXPAND
# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>

# include <boost/preprocessor/variadic/size.hpp>
# include <wondermacros/objects/api.h>
# include <wondermacros/array/dynamic_array.h>
#endif

#include "we_view.h"
#include "we_view_char_buffer_class.h"
#include <wondermacros/objects/x/class_declare.h>

/*Unit Test*/

#ifndef W_TEST
# define W_TEST(...)
#endif

W_TEST(we_view_char_buffer,
    struct we_view_char_buffer* view = W_NEW(we_view_char_buffer);

    free(view);
)

#endif
