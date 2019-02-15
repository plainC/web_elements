#define CLASS we_type_time_t

#define we_type_time_t__define               \
    /* Inherits */                           \
    we_type__define                          \
                                             \
    OVERLOAD(we_type_time_t,get_size)        \
    OVERLOAD(we_type_time_t,to_string)       \
    /**/
