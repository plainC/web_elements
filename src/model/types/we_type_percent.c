#ifndef WDEBUG_EXPAND
# include <wondermacros/misc/unused.h>
#endif


/* Include class header. */
#include "we_type_percent.h"

struct we_type* we_type_percent;

/* Begin class implementation. */
#include "we_type_percent_class.h"
#include <wondermacros/objects/x/class_start.h>


CONSTRUCT(we_type_percent) /* self */
{
}

FINALIZE(we_type_percent) /* self */
{
}

METHOD(we_type_percent,public,int,get_size)
{
    return sizeof(double);
}

METHOD(we_type_percent,public,int,to_string,
    (char* buffer, const char* format, void* data))
{
     format = format ? format : "%.2f%%";
     return sprintf(buffer, format, 100.0 * *((double*) data));
}

#include <wondermacros/objects/x/class_end.h>
