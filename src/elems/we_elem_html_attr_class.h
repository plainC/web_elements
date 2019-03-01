#define CLASS we_elem_html_attr
#define SUPER we

#define we_elem_html_attr__define             \
    /* Inherits */                            \
    we__define                                \
                                              \
    OVERRIDE(we_elem_html_attr,expand)        \
                                              \
    VAR(read,enum we_elem_html_attr_tag,tag)  \
    VAR(read,struct we*,value)                \
    /**/
