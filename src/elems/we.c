#ifndef WDEBUG_EXPAND
# include <wondermacros/misc/unused.h>
#endif


#include "we.h"

/* Begin class implementation. */
#include "we_class.h"
#include <wondermacros/objects/x/class_start.h>


CONSTRUCT(we) /* self */
{
    W_UNUSED(self);
}

FINALIZE(we) /* self */
{
}

METHOD(we,public,void,expand,
    (struct we_view* view, const struct we_model* model))
{
    W_UNUSED(view);
    W_UNUSED(model);
}

#include <wondermacros/objects/x/class_end.h>
