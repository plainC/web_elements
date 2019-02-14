#ifndef WDEBUG_EXPAND
# include <wondermacros/misc/unused.h>
#endif


#include "we_elem_css_rule.h"

/* Begin class implementation. */
#include "we_elem_css_rule_class.h"
#include <wondermacros/objects/x/class_start.h>


CONSTRUCT(we_elem_css_rule) /* self */
{
}

FINALIZE(we_elem_css_rule) /* self */
{
}

METHOD(we_elem_css_rule,public,void,expand,
    (struct we_view* view, const struct we_model* model))
{
    W_UNUSED(model);
    W_CALL(view,write_str)(self->selector,strlen(self->selector));
    W_CALL(view,write_str)(" {",2);
    W_DYNAMIC_ARRAY_FOR_EACH(struct we_elem_css_declaration*, decl, self->declarations)
        W_CALL(decl,expand)(view,model);
    W_CALL(view,write_str)("}\n",2);
}

#include <wondermacros/objects/x/class_end.h>
