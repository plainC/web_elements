#define CLASS we_elem_css_rule

#define we_elem_css_rule__define                            \
    /* Inherits */                                          \
    we__define                                              \
                                                            \
    OVERLOAD(we_elem_css_rule,expand)                       \
                                                            \
    VAR(read,char*,selector)                                \
    VAR(read,struct we_elem_css_declaration**,declarations) \
    /**/
