#define CLASS we_elem_composite

#define we_elem_composite__define                \
    /* Inherits */                               \
    we__define                                   \
                                                 \
    OVERLOAD(we_elem_composite,expand)           \
                                                 \
    METHOD(we_elem_composite,public,void,append, \
        (struct we* elem))                       \
                                                 \
    VAR(read,struct we**,elems)                  \
    /**/
