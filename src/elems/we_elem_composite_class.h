#define CLASS we_elem_composite
#define SUPER we

#define we_elem_composite__define                \
    /* Inherits */                               \
    we__define                                   \
                                                 \
    OVERRIDE(we_elem_composite,expand)           \
                                                 \
    METHOD(we_elem_composite,public,void,append, \
        (struct we* elem))                       \
                                                 \
    VAR(read,struct we**,elems)                  \
    /**/
