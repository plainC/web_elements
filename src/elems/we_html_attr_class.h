#define CLASS we_html_attr

#define we_html_attr__define                  \
    /* Inherits */                            \
    we__define                                \
                                              \
    OVERLOAD(we_html_attr,expand)             \
                                              \
    VAR(read,enum we_html_attr_tag,tag)       \
    VAR(read,struct we*,value)                \
    /**/
