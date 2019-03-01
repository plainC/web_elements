#define CLASS we_elem_var
#define SUPER we

#define we_elem_var__define                   \
    /* Inherits */                            \
    we__define                                \
                                              \
    OVERRIDE(we_elem_var,expand)              \
                                              \
    VAR(read,char*,name)                      \
    VAR(read,char*,format)                    \
    /**/
