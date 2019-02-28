#define CLASS we_elem_css_value_color

#define we_elem_css_value_color__define                     \
    /* Inherits */                                          \
    we_elem_css_value__define                               \
    INHERIT(we_elem_css_value)                              \
                                                            \
    OVERRIDE(we_elem_css_value_color,expand)                \
                                                            \
    VAR(read,unsigned char,r)                               \
    VAR(read,unsigned char,g)                               \
    VAR(read,unsigned char,b)                               \
    /**/
