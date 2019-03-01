#define CLASS we_elem_css_selector_id
#define SUPER we_elem_css_selector

#define we_elem_css_selector_id__define                     \
    /* Inherits */                                          \
    we_elem_css_selector__define                            \
                                                            \
    OVERRIDE(we_elem_css_selector_id,expand)                \
                                                            \
    VAR(read,char*,name)                                    \
    VAR(read,size_t,len)                                    \
                                                            \
    /**/
