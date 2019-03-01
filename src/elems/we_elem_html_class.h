#define CLASS we_elem_html
#define SUPER we

#define we_elem_html__define                      \
    /* Inherits */                                \
    we__define                                    \
                                                  \
    OVERRIDE(we_elem_html,expand)                 \
                                                  \
    METHOD(we_elem_html,public,void,append_child, \
        (struct we* child))                       \
                                                  \
    VAR(read,enum we_elem_html_tag,tag)           \
    VAR(read,struct we_elem_html_attr**,attrs)    \
    VAR(read,struct we**,next)                    \
    /**/
