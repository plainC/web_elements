#define CLASS we_elem_cond
#define SUPER we

#define we_elem_cond__define                  \
    /* Inherits */                            \
    we__define                                \
                                              \
    OVERRIDE(we_elem_cond,expand)             \
                                              \
    VAR(read,char*,name)                      \
    VAR(read,char*,format)                    \
    VAR(read,struct we*,child)                \
    /**/
