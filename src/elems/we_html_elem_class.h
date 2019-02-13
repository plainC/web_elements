#define CLASS we_html_elem

#define we_html_elem__define                  \
    /* Inherits */                            \
    we__define                                \
                                              \
    OVERLOAD(we_html_elem,expand)             \
                                              \
    VAR(read,enum we_html_elem_tag,tag)       \
    VAR(read,struct we_html_attr**,attrs)     \
    VAR(read,struct we**,next)                \
    /**/
