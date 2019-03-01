#define CLASS we_elem_css_selector_elem
#define SUPER we_elem_css_selector

#define we_elem_css_selector_elem__define                   \
    /* Inherits */                                          \
    we_elem_css_selector__define                            \
                                                            \
    OVERRIDE(we_elem_css_selector_elem,expand)              \
                                                            \
    VAR(read,char**,elems)                                  \
                                                            \
    /**/
