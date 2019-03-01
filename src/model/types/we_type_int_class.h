#define CLASS we_type_int
#define SUPER we_type

#define we_type_int__define                  \
    /* Inherits */                           \
    we_type__define                          \
                                             \
    OVERRIDE(we_type_int,get_size)           \
    OVERRIDE(we_type_int,to_string)          \
    /**/
