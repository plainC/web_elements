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

METHOD(we_view,public,void,write_str,
    (const char* str, int len))
{
    W_UNUSED(str);
    W_UNUSED(len);
}

METHOD(we_view,public,void,clear)
{
}

METHOD(we_view,public,void,expand,
        (const struct we_model* model))
{
    W_CALL(self->root,expand)(W_OBJECT_AS(self,we_view), model);
}

#include <wondermacros/objects/x/class_end.h>
