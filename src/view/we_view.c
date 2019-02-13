#ifndef WDEBUG_EXPAND
# include <wondermacros/misc/unused.h>
#endif


#include "we_view.h"

/* Begin class implementation. */
#include "we_view_class.h"
#include <wondermacros/objects/x/class_start.h>


CONSTRUCT(we_view) /* self */
{
    W_UNUSED(self);
}

FINALIZE(we_view) /* self */
{
}

METHOD(we_view,public,void,to_string,
    (struct we_model* model))
{
    W_UNUSED(model);
}

#include <wondermacros/objects/x/class_end.h>
