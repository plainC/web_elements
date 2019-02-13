#define CLASS we_string

#define we_string__define                     \
    /* Inherits */                            \
    we__define                                \
                                              \
    OVERLOAD(we_string,expand)                \
                                              \
    VAR(read,char*,ptr)                       \
    /**/
