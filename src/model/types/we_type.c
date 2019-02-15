#ifndef WDEBUG_EXPAND
# include <wondermacros/misc/unused.h>
#endif


/* Include class header. */
#include "we_type.h"

/* Begin class implementation. */
#include "we_type_class.h"
#include <wondermacros/objects/x/class_start.h>


CONSTRUCT(we_type) /* self */
{
    W_UNUSED(self);
}

FINALIZE(we_type) /* self */
{
}

METHOD(we_type,public,int,get_size)
{
    return -1;
}

METHOD(we_type,public,int,to_string,
    (char* buffer, const char* format, void* data))
{
    W_UNUSED(buffer);
    W_UNUSED(format);
    W_UNUSED(data);
    return -1;
}

#include <wondermacros/objects/x/class_end.h>
