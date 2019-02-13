#ifndef WDEBUG_EXPAND
# include <wondermacros/misc/unused.h>
#endif


#include "we_view_char_buffer.h"

/* Begin class implementation. */
#include "we_view_char_buffer_class.h"
#include <wondermacros/objects/x/class_start.h>


CONSTRUCT(we_view_char_buffer) /* self */
{
    W_UNUSED(self);
}

FINALIZE(we_view_char_buffer) /* self */
{
}

METHOD(we_view_char_buffer,public,void,to_string,
    (struct we_model* model))
{
    W_UNUSED(model);
}

#include <wondermacros/objects/x/class_end.h>
