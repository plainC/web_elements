#ifndef WDEBUG_EXPAND
# include <wondermacros/misc/unused.h>
#endif


/* Include class header. */
#include "we_int.h"

/* Begin class implementation. */
#include "we_int_class.h"
#include <wondermacros/objects/x/class_start.h>


CONSTRUCT(we_int) /* self */
{
    W_UNUSED(self);
}

FINALIZE(we_int) /* self */
{
}

METHOD(we_int,public,int,get_size)
{
    return sizeof(int);
}

METHOD(we_int,public,int,to_string,
    (char* buffer, char* format, void* data))
{
     format = format ? format : "%d";
     return sprintf(buffer, format, *((int*) data));
}

#include <wondermacros/objects/x/class_end.h>
