#define CLASS we_elem_css_selector_id

#define we_elem_css_selector_id__define                     \
    /* Inherits */                                          \
    we_elem_css_selector__define                            \
                                                            \
    OVERLOAD(we_elem_css_selector_id,expand)                \
                                                            \
    VAR(read,char*,name)                                    \
    VAR(read,size_t,len)                                    \
                                                            \
    /**/
