#include <web_elements/web_elements.h>

int main(int argc, char** argv)
{
    we_init(argc, argv);

    struct we* doc = weFOREACH(e,array,htmlLI(weVAR(e)));

    struct we_view_char_buffer* view =
        W_NEW(we_view_char_buffer, .root = doc, .size=256);

    struct we_model* model = W_NEW(we_model);
    int* array = NULL;
    W_DYNAMIC_ARRAY_PUSH(array, 1, 2, 3, 4, 5);

    W_CALL(model,bind_ptr)("array", weARRAY(weTYPE(int)), &array);

    W_CALL(view,expand)(model);
    printf("%s\n", view->buffer);
    W_CALL_VOID(view,free);
    W_CALL_VOID(model,free);
    W_DYNAMIC_ARRAY_FREE(array);

    we_shutdown();

    return 0;
}

