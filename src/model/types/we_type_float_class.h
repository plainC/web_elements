#define CLASS we_type_float

#define we_type_float__define                  \
    /* Inherits */                             \
    we_type__define                            \
                                               \
    OVERRIDE(we_type_float,get_size)           \
    OVERRIDE(we_type_float,to_string)          \
    /**/
