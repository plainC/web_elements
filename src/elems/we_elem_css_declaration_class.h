#define CLASS we_elem_css_declaration
#define SUPER we

#define we_elem_css_declaration__define             \
    /* Inherits */                                  \
    we__define                                      \
                                                    \
    OVERRIDE(we_elem_css_declaration,expand)        \
                                                    \
    VAR(read,struct we_elem_css_property*,property) \
    VAR(read,struct we_elem_css_value*,value)       \
    /**/
