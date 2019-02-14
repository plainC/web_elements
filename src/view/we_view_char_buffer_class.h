#define CLASS we_view_char_buffer

#define we_view_char_buffer__define          \
    /* Inherits */                           \
    we_view__define                          \
                                             \
    OVERLOAD(we_view_char_buffer,write_str)  \
    OVERLOAD(we_view_char_buffer,clear)      \
                                             \
    VAR(read,size_t,size)                    \
    VAR(read,char*,buffer)                   \
    VAR(private,unsigned,pos)                \
                                             \
    /**/
