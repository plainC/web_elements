#ifndef WDEBUG_EXPAND
# include <wondermacros/misc/unused.h>
#endif


#include "we_string.h"

/* Begin class implementation. */
#include "we_string_class.h"
#include <wondermacros/objects/x/class_start.h>


CONSTRUCT(we_string) /* self */
{
    self->ptr = strdup(self->ptr);
}

FINALIZE(we_string) /* self */
{
}

METHOD(we_string,public,void,expand,
    (struct we_view* view, struct we_model* model))
{
    W_UNUSED(view);
    W_UNUSED(model);
}

#include <wondermacros/objects/x/class_end.h>
