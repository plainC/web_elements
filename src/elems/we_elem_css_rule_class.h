#define CLASS we_elem_css_rule

#define we_elem_css_rule__define                            \
    /* Inherits */                                          \
    we__define                                              \
    INHERIT(we)                                             \
                                                            \
    OVERRIDE(we_elem_css_rule,expand)                       \
                                                            \
    VAR(read,struct we_elem_css_selector*,selector)         \
    VAR(read,struct we_elem_css_declaration**,declarations) \
    /**/
