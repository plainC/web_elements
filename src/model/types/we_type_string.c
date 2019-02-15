#ifndef WDEBUG_EXPAND
# include <wondermacros/misc/unused.h>
#endif


/* Include class header. */
#include "we_type_string.h"

struct we_type* we_type_string;

/* Begin class implementation. */
#include "we_type_string_class.h"
#include <wondermacros/objects/x/class_start.h>


CONSTRUCT(we_type_string) /* self */
{
}

FINALIZE(we_type_string) /* self */
{
}

METHOD(we_type_string,public,int,get_size)
{
    return sizeof(int);
}

METHOD(we_type_string,public,int,to_string,
    (char* buffer, const char* format, void* data))
{
     format = format ? format : "%s";
     return sprintf(buffer, format, *((const char**) data));
}

#include <wondermacros/objects/x/class_end.h>
