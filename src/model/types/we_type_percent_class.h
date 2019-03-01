#define CLASS we_type_percent
#define SUPER we_type

#define we_type_percent__define                  \
    /* Inherits */                               \
    we_type__define                              \
                                                 \
    OVERRIDE(we_type_percent,get_size)           \
    OVERRIDE(we_type_percent,to_string)          \
    /**/
