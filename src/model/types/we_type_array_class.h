#define CLASS we_type_array

#define we_type_array__define                  \
    /* Inherits */                             \
    we_type__define                            \
                                               \
    OVERLOAD(we_type_array,get_size)           \
    OVERLOAD(we_type_array,to_string)          \
                                               \
    VAR(read,struct we_type*,elem_type)        \
                                               \
    /**/
