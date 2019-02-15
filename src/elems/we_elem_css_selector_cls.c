#ifndef WDEBUG_EXPAND
# include <wondermacros/misc/unused.h>
#endif


#include "we_elem_css_selector_cls.h"


/* Begin class implementation. */
#include "we_elem_css_selector_cls_class.h"
#include <wondermacros/objects/x/class_start.h>


CONSTRUCT(we_elem_css_selector_cls) /* self */
{
    self->name = strdup(self->name);
    if (!self->elem)
        self->elem = "";
    self->elem = strdup(self->elem);

    self->len = strlen(self->name) + strlen(self->elem) + 1;
    self->expanded = malloc(self->len + 1);
    sprintf(self->expanded, "%s.%s", self->elem, self->name);
}

FINALIZE(we_elem_css_selector_cls) /* self */
{
    free(self->name);
    free(self->elem);
    free(self->expanded);
}

METHOD(we_elem_css_selector_cls,public,void,expand,
    (struct we_view* view, const struct we_model* model))
{
    W_UNUSED(model);
    W_CALL(view,write_str)(self->expanded,self->len);
}

#include <wondermacros/objects/x/class_end.h>
