#define CLASS we_type

#define we_type__define                                                  \
    /* Inherits */                                                       \
      /*none */                                                          \
                                                                         \
    METHOD(we_type,public,int,get_size)                                  \
    METHOD(we_type,public,int,to_string,                                 \
        (char* buffer, const char* format, void* data))                  \
                                                                         \
    /**/
