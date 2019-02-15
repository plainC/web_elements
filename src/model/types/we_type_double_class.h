#define CLASS we_type_double

#define we_type_double__define               \
    /* Inherits */                           \
    we_type__define                          \
                                             \
    OVERLOAD(we_type_double,get_size)        \
    OVERLOAD(we_type_double,to_string)       \
    /**/
