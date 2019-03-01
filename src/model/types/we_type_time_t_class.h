#define CLASS we_type_time_t
#define SUPER we_type

#define we_type_time_t__define               \
    /* Inherits */                           \
    we_type__define                          \
                                             \
    OVERRIDE(we_type_time_t,get_size)        \
    OVERRIDE(we_type_time_t,to_string)       \
    /**/
