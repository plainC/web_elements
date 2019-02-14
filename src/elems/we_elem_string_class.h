#define CLASS we_elem_string

#define we_elem_string__define                \
    /* Inherits */                            \
    we__define                                \
                                              \
    OVERLOAD(we_elem_string,expand)           \
                                              \
    VAR(read,char*,ptr)                       \
    VAR(read,unsigned,length)                 \
    /**/
