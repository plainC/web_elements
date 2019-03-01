#define CLASS we_elem_css_value
#define SUPER we

#define we_elem_css_value__define                           \
    /* Inherits */                                          \
    we__define                                              \
                                                            \
    OVERRIDE(we_elem_css_value,expand)                      \
                                                            \
    VAR(read,enum we_elem_css_value_tag,tag)                \
    /**/
