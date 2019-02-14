#ifndef WDEBUG_EXPAND
# include <wondermacros/misc/unused.h>
#endif


#include "we_elem_string.h"

/* Begin class implementation. */
#include "we_elem_string_class.h"
#include <wondermacros/objects/x/class_start.h>


CONSTRUCT(we_elem_string) /* self */
{
    self->ptr = strdup(self->ptr);
    self->length = strlen(self->ptr);
}

FINALIZE(we_elem_string) /* self */
{
    free(self->ptr);
}

METHOD(we_elem_string,public,void,expand,
    (struct we_view* view, const struct we_model* model))
{
    W_UNUSED(model);
    W_CALL(view,write_str)(self->ptr,self->length);
}

#include <wondermacros/objects/x/class_end.h>
