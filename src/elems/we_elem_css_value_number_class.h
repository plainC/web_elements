#define CLASS we_elem_css_value_number

#define we_elem_css_value_number__define                    \
    /* Inherits */                                          \
    we_elem_css_value__define                               \
    INHERIT(we_elem_css_value)                              \
                                                            \
    OVERLOAD(we_elem_css_value_number,expand)               \
                                                            \
    VAR(read,double,value)                                  \
    /**/
