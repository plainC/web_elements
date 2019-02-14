#define CLASS we_elem_html

#define we_elem_html__define                      \
    /* Inherits */                                \
    we__define                                    \
                                                  \
    OVERLOAD(we_elem_html,expand)                 \
                                                  \
    METHOD(we_elem_html,public,void,append_child, \
        (struct we* child))                       \
                                                  \
    VAR(read,enum we_elem_html_tag,tag)           \
    VAR(read,struct we_html_attr**,attrs)         \
    VAR(read,struct we**,next)                    \
    /**/
