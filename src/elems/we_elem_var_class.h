#define CLASS we_elem_var

#define we_elem_var__define                   \
    /* Inherits */                            \
    we__define                                \
                                              \
    OVERLOAD(we_elem_var,expand)              \
                                              \
    VAR(read,char*,name)                      \
    VAR(read,char*,format)                    \
    /**/
