#include <web_elements/web_elements.h>
#include <math.h>

int main()
{
    struct we* doc = htmlHTML(
        htmlHEAD(
            htmlTITLE(_("An Example Page"))
        ),
        htmlBODY(
            htmlP(_("This page was created using Web Elements.")),
            htmlP(_("Square root of 3 is "), weVAR(sqrt3)),
            htmlBR(),
            htmlP(_("End of page."))
        )
    );

    struct we_view_char_buffer* view =
        W_NEW(we_view_char_buffer, .root = doc, .size=256);

    struct we_model* model = W_NEW(we_model);
    const struct we_type* wedouble = W_NEW(we_type_double);
    double sqrt3 = sqrt(3);

    W_CALL(model,bind_ptr)("sqrt3", wedouble, &sqrt3);

    W_CALL(view,expand)(model);
    printf("%s\n", view->buffer);
    W_CALL_VOID(view,free);
    W_CALL_VOID(model,free);
    W_CALL_VOID(wedouble,free);

    return 0;
}

