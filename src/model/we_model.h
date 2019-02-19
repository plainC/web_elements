#ifndef __WE_MODEL_H
#define __WE_MODEL_H

struct we_var {
    const char* name;
    const struct we_type* type;
    void* ptr;
};

struct we_model_scope {
    struct we_var** vars;
};

#ifndef WDEBUG_EXPAND
# define W_OBJECT_CAST_TO_VOID
# include <wondermacros/objects/api.h>
#endif

#include "we_fwd.h"
#include "types/all.h"

#include "we_model_class.h"
#include <wondermacros/objects/x/class_declare.h>

/*Unit Test*/

#ifndef W_TEST
# define W_TEST(...)
#endif

W_TEST(we_model,
    struct we_model* model = W_NEW(we_model);
    int i=42;
    struct we_type_int* wint = W_NEW(we_type_int);

    W_CALL(model,bind_ptr)("i", wint,&i);

    struct we_var* v = W_CALL(model,get)("i");
    W_TEST_ASSERT(v, "i not found");
    W_TEST_ASSERT(v->type == wint, "type does not match");
    W_TEST_ASSERT(v->ptr == &i, "pointer does not match");

    W_CALL_VOID(model,free);
    W_CALL_VOID(wint,free);
)

#endif

