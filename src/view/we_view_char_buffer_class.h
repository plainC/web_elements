#define CLASS we_view_char_buffer
#define SUPER we_view

#define we_view_char_buffer__define          \
    /* Inherits */                           \
    we_view__define                          \
                                             \
    OVERRIDE(we_view_char_buffer,write_str)  \
    OVERRIDE(we_view_char_buffer,clear)      \
                                             \
    VAR(read,size_t,size)                    \
    VAR(read,char*,buffer)                   \
    VAR(private,unsigned,pos)                \
                                             \
    /**/
