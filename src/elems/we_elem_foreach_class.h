#define CLASS we_elem_foreach

#define we_elem_foreach__define               \
    /* Inherits */                            \
    we__define                                \
    INHERIT(we)                               \
                                              \
    OVERRIDE(we_elem_foreach,expand)          \
                                              \
    VAR(read,char*,elem)                      \
    VAR(read,char*,name)                      \
    VAR(read,struct we*,next)                 \
    VAR(read,char*,format)                    \
    /**/
