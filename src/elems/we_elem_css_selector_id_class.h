#define CLASS we_elem_css_selector_id

#define we_elem_css_selector_id__define                     \
    /* Inherits */                                          \
    we_elem_css_selector__define                            \
    INHERIT(we_elem_css_selector)                           \
                                                            \
    OVERRIDE(we_elem_css_selector_id,expand)                \
                                                            \
    VAR(read,char*,name)                                    \
    VAR(read,size_t,len)                                    \
                                                            \
    /**/
