#define CLASS we_int

#define we_int__define                       \
    /* Inherits */                           \
    we_type__define                          \
                                             \
    OVERLOAD(we_int,get_size)                \
    OVERLOAD(we_int,to_string)               \
    /**/
