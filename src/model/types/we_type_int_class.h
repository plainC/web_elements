#define CLASS we_type_int

#define we_type_int__define                  \
    /* Inherits */                           \
    we_type__define                          \
                                             \
    OVERLOAD(we_type_int,get_size)           \
    OVERLOAD(we_type_int,to_string)          \
    /**/
