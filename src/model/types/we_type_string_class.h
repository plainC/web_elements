#define CLASS we_type_string
#define SUPER we_type

#define we_type_string__define               \
    /* Inherits */                           \
    we_type__define                          \
                                             \
    OVERRIDE(we_type_string,get_size)        \
    OVERRIDE(we_type_string,to_string)       \
    /**/
