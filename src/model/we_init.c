#ifndef WDEBUG_EXPAND
# include <wondermacros/objects/api.h>
# include <wondermacros/misc/unused.h>
#endif

#include "we_fwd.h"
#include "types/all.h"


void
we_init(int argc, char** argv)
{
    W_UNUSED(argc);
    W_UNUSED(argv);

    we_type_int = W_NEW(we_type_int);
    we_type_double = W_NEW(we_type_double);
    we_type_float = W_NEW(we_type_float);
    we_type_string = W_NEW(we_type_string);
    we_type_time_t = W_NEW(we_type_time_t);
}

void we_shutdown()
{
    W_CALL_VOID(we_type_int,free);
    W_CALL_VOID(we_type_double,free);
    W_CALL_VOID(we_type_float,free);
    W_CALL_VOID(we_type_string,free);
    W_CALL_VOID(we_type_time_t,free);
}

