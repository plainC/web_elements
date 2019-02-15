#ifndef WDEBUG_EXPAND
# include <wondermacros/misc/unused.h>
#endif


/* Include class header. */
#include "we_type_time_t.h"

struct we_type* we_type_time_t;

/* Begin class implementation. */
#include "we_type_time_t_class.h"
#include <wondermacros/objects/x/class_start.h>


CONSTRUCT(we_type_time_t) /* self */
{
}

FINALIZE(we_type_time_t) /* self */
{
}

METHOD(we_type_time_t,public,int,get_size)
{
    return sizeof(time_t);
}

METHOD(we_type_time_t,public,int,to_string,
    (char* buffer, const char* format, void* data))
{
     char tbuf[26];
     ctime_r((const time_t*) data, tbuf);
     format = format ? format : "%s";
     return sprintf(buffer, format, tbuf);
}

#include <wondermacros/objects/x/class_end.h>
