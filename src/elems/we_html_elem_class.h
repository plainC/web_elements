#define CLASS we_html_elem

#define we_html_elem__define                     \
    /* Inherits */                               \
    we__define                                   \
                                                 \
    OVERLOAD(we_html_elem,expand)                \
                                                 \
    METHOD(we_html_elem,public,void,append_child, \
        (struct we* child))                      \
                                                 \
    VAR(read,enum we_html_elem_tag,tag)          \
    VAR(read,struct we_html_attr**,attrs)        \
    VAR(read,struct we**,next)                   \
    /**/
