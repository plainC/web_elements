#define CLASS we_elem_css_selector_elem

#define we_elem_css_selector_elem__define                   \
    /* Inherits */                                          \
    we_elem_css_selector__define                            \
    INHERIT(we_elem_css_selector)                           \
                                                            \
    OVERLOAD(we_elem_css_selector_elem,expand)              \
                                                            \
    VAR(read,char**,elems)                                  \
                                                            \
    /**/
