#define CLASS we_elem_css_value_time

#define we_elem_css_value_time__define                      \
    /* Inherits */                                          \
    we_elem_css_value__define                               \
    INHERIT(we_elem_css_value)                              \
                                                            \
    OVERLOAD(we_elem_css_value_time,expand)                 \
                                                            \
    VAR(read,enum we_elem_css_time_unit,unit)               \
    VAR(read,double,length)                                 \
    /**/
