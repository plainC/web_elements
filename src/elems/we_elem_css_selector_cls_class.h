#define CLASS we_elem_css_selector_cls

#define we_elem_css_selector_cls__define                    \
    /* Inherits */                                          \
    we_elem_css_selector__define                            \
    INHERIT(we_elem_css_selector)                           \
                                                            \
    OVERLOAD(we_elem_css_selector_cls,expand)               \
                                                            \
    VAR(read,char*,elem)                                    \
    VAR(read,char*,name)                                    \
    VAR(read,char*,expanded)                                \
    VAR(read,size_t,len)                                    \
                                                            \
    /**/
