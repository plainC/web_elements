#define CLASS we_elem_css_value_length

#define we_elem_css_value_length__define                    \
    /* Inherits */                                          \
    we_elem_css_value__define                               \
    INHERIT(we_elem_css_value)                              \
                                                            \
    OVERRIDE(we_elem_css_value_length,expand)               \
                                                            \
    VAR(read,enum we_elem_css_length_unit,unit)             \
    VAR(read,double,length)                                 \
    /**/
