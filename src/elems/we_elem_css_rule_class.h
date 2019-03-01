#define CLASS we_elem_css_rule
#define SUPER we

#define we_elem_css_rule__define                            \
    /* Inherits */                                          \
    we__define                                              \
                                                            \
    OVERRIDE(we_elem_css_rule,expand)                       \
                                                            \
    VAR(read,struct we_elem_css_selector*,selector)         \
    VAR(read,struct we_elem_css_declaration**,declarations) \
    /**/
