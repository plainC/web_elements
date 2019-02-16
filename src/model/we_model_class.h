#define CLASS we_model

#define we_model__define                                                 \
    /* Inherits */                                                       \
      /*none */                                                          \
                                                                         \
    METHOD(we_model,public,int,add_scope)                                \
    METHOD(we_model,public,int,drop_scope)                               \
    METHOD(we_model,public,int,bind_ptr,                                 \
        (const char* name, const struct we_type* type, void* ptr))       \
    METHOD(we_model,public,struct we_var*,get,                           \
        (const char* name))                                              \
                                                                         \
    VAR(private,struct we_model_scope**,scopes)                          \
                                                                         \
    /**/
