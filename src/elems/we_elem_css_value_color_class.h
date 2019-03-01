#define CLASS we_elem_css_value_color
#define SUPER we_elem_css_value

#define we_elem_css_value_color__define                     \
    /* Inherits */                                          \
    we_elem_css_value__define                               \
                                                            \
    OVERRIDE(we_elem_css_value_color,expand)                \
                                                            \
    VAR(read,unsigned char,r)                               \
    VAR(read,unsigned char,g)                               \
    VAR(read,unsigned char,b)                               \
    /**/
