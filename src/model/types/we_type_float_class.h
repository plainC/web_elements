#define CLASS we_type_float

#define we_type_float__define                  \
    /* Inherits */                             \
    we_type__define                            \
                                               \
    OVERLOAD(we_type_float,get_size)           \
    OVERLOAD(we_type_float,to_string)          \
    /**/
