#ifndef WDEBUG_EXPAND
# include <wondermacros/misc/unused.h>
#endif


/* Include class header. */
#include "we_type_float.h"

struct we_type* we_type_float;

/* Begin class implementation. */
#include "we_type_float_class.h"
#include <wondermacros/objects/x/class_start.h>


CONSTRUCT(we_type_float) /* self */
{
}

FINALIZE(we_type_float) /* self */
{
}

METHOD(we_type_float,public,int,get_size)
{
    return sizeof(float);
}

METHOD(we_type_float,public,int,to_string,
    (char* buffer, const char* format, void* data))
{
     format = format ? format : "%.2f";
     return sprintf(buffer, format, *((float*) data));
}

#include <wondermacros/objects/x/class_end.h>
