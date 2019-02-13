#define CLASS we_view

#define we_view__define                                                  \
    /* Inherits */                                                       \
      /*none */                                                          \
                                                                         \
    METHOD(we_view,public,void,expand,                                   \
        (const struct we_model* model))                                  \
                                                                         \
    METHOD(we_view,public,void,write_str,                                \
        (const char* str, int len))                                      \
                                                                         \
    VAR(read,struct we*,root)                                            \
                                                                         \
    /**/
