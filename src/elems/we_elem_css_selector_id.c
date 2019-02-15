#ifndef WDEBUG_EXPAND
# include <wondermacros/misc/unused.h>
#endif


#include "we_elem_css_selector_id.h"


/* Begin class implementation. */
#include "we_elem_css_selector_id_class.h"
#include <wondermacros/objects/x/class_start.h>


CONSTRUCT(we_elem_css_selector_id) /* self */
{
    self->name = strdup(self->name);
    self->len = strlen(self->name);
}

FINALIZE(we_elem_css_selector_id) /* self */
{
    free(self->name);
}

METHOD(we_elem_css_selector_id,public,void,expand,
    (struct we_view* view, const struct we_model* model))
{
    W_UNUSED(model);
    W_CALL(view,write_str)("#",1);
    W_CALL(view,write_str)(self->name,self->len);
}

#include <wondermacros/objects/x/class_end.h>
