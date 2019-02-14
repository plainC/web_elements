#ifndef WDEBUG_EXPAND
# include <wondermacros/misc/unused.h>
#endif


#include "we_elem_css_declaration.h"

/* Begin class implementation. */
#include "we_elem_css_declaration_class.h"
#include <wondermacros/objects/x/class_start.h>


CONSTRUCT(we_elem_css_declaration) /* self */
{
}

FINALIZE(we_elem_css_declaration) /* self */
{
}

METHOD(we_elem_css_declaration,public,void,expand,
    (struct we_view* view, const struct we_model* model))
{
    W_UNUSED(model);
    W_CALL(self->property,expand)(view,model);
    W_CALL(view,write_str)(":",1);
    W_CALL(self->value,expand)(view,model);
    W_CALL(view,write_str)(";",1);
}

#include <wondermacros/objects/x/class_end.h>
