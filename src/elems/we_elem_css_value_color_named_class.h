#define CLASS we_elem_css_value_color_named
#define SUPER we_elem_css_value_color

#define we_elem_css_value_color_named__define               \
    /* Inherits */                                          \
    we_elem_css_value_color__define                         \
                                                            \
    OVERRIDE(we_elem_css_value_color_named,expand)          \
                                                            \
    VAR(read,enum we_elem_css_color_name_tag, color_tag)    \
    /**/
