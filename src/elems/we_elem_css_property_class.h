#define CLASS we_elem_css_property

#define we_elem_css_property__define                        \
    /* Inherits */                                          \
    we__define                                              \
    INHERIT(we)                                             \
                                                            \
    OVERLOAD(we_elem_css_property,expand)                   \
                                                            \
    VAR(read,enum we_elem_css_property_tag,tag)             \
    /**/
