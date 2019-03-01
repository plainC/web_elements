#define CLASS we_elem_css_value_time
#define SUPER we_elem_css_value

#define we_elem_css_value_time__define                      \
    /* Inherits */                                          \
    we_elem_css_value__define                               \
                                                            \
    OVERRIDE(we_elem_css_value_time,expand)                 \
                                                            \
    VAR(read,enum we_elem_css_time_unit,unit)               \
    VAR(read,double,length)                                 \
    /**/
