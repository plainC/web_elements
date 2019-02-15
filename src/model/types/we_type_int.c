#ifndef WDEBUG_EXPAND
# include <wondermacros/misc/unused.h>
#endif


/* Include class header. */
#include "we_type_int.h"

struct we_type* we_type_int;

/* Begin class implementation. */
#include "we_type_int_class.h"
#include <wondermacros/objects/x/class_start.h>


CONSTRUCT(we_type_int) /* self */
{
}

FINALIZE(we_type_int) /* self */
{
}

METHOD(we_type_int,public,int,get_size)
{
    return sizeof(int);
}

METHOD(we_type_int,public,int,to_string,
    (char* buffer, const char* format, void* data))
{
     format = format ? format : "%d";
     return sprintf(buffer, format, *((int*) data));
}

#include <wondermacros/objects/x/class_end.h>
