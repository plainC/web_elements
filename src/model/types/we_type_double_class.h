#define CLASS we_type_double
#define SUPER we_type

#define we_type_double__define               \
    /* Inherits */                           \
    we_type__define                          \
                                             \
    OVERRIDE(we_type_double,get_size)        \
    OVERRIDE(we_type_double,to_string)       \
    /**/
