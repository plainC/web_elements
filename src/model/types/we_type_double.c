#ifndef WDEBUG_EXPAND
# include <wondermacros/misc/unused.h>
#endif


/* Include class header. */
#include "we_type_double.h"

struct we_type* we_type_double;

/* Begin class implementation. */
#include "we_type_double_class.h"
#include <wondermacros/objects/x/class_start.h>


CONSTRUCT(we_type_double) /* self */
{
}

FINALIZE(we_type_double) /* self */
{
}

METHOD(we_type_double,public,int,get_size)
{
    return sizeof(double);
}

METHOD(we_type_double,public,int,to_string,
    (char* buffer, const char* format, void* data))
{
     format = format ? format : "%g";
     return sprintf(buffer, format, *((double*) data));
}

#include <wondermacros/objects/x/class_end.h>
