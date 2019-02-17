#define CLASS we_elem_css_declaration

#define we_elem_css_declaration__define             \
    /* Inherits */                                  \
    we__define                                      \
    INHERIT(we)                                     \
                                                    \
    OVERLOAD(we_elem_css_declaration,expand)        \
                                                    \
    VAR(read,struct we_elem_css_property*,property) \
    VAR(read,struct we_elem_css_value*,value)       \
    /**/
