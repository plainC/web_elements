#define CLASS we_elem_css_selector_cls
#define SUPER we_elem_css_selector

#define we_elem_css_selector_cls__define                    \
    /* Inherits */                                          \
    we_elem_css_selector__define                            \
                                                            \
    OVERRIDE(we_elem_css_selector_cls,expand)               \
                                                            \
    VAR(read,char*,elem)                                    \
    VAR(read,char*,name)                                    \
    VAR(read,char*,expanded)                                \
    VAR(read,size_t,len)                                    \
                                                            \
    /**/
