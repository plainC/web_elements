#include <web_elements/web_elements.h>

int main(int argc, char** argv)
{
    we_init(argc, argv);

    struct we* doc = weFOREACH(row,array,
        htmlTR(weFOREACH(e,row,
            htmlTD(weVAR(e)))));

    struct we_view_char_buffer* view =
        W_NEW(we_view_char_buffer, .root = doc, .size=256);

    struct we_model* model = W_NEW(we_model);
    double** array = NULL;
    double* row1 = NULL;
    double* row2 = NULL;
    double* row3 = NULL;
    W_DYNAMIC_ARRAY_PUSH(row1, 1.2, 4.4, 1.3);
    W_DYNAMIC_ARRAY_PUSH(row2, 0.5, 7.2, 9.2);
    W_DYNAMIC_ARRAY_PUSH(row3, 0.2, 6.8, 3.3);
    W_DYNAMIC_ARRAY_PUSH(array, row1, row2, row3);

    W_CALL(model,bind_ptr)("array", weARRAY(weARRAY(weTYPE(double))), &array);

    W_CALL(view,expand)(model);
    printf("%s\n", view->buffer);
    W_CALL_VOID(view,free);
    W_CALL_VOID(model,free);
    W_DYNAMIC_ARRAY_FREE(array);
    W_DYNAMIC_ARRAY_FREE(row1);
    W_DYNAMIC_ARRAY_FREE(row2);
    W_DYNAMIC_ARRAY_FREE(row3);

    we_shutdown();

    return 0;
}

