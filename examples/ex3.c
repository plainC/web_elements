#include <web_elements/web_elements.h>

int main()
{
    struct we* doc = htmlHTML(
        htmlHEAD(
            htmlTITLE(_("An Example Page"))
        ),
        htmlBODY(
            htmlP(_("This page was created using Web Elements.")),
            htmlP(_("Two plus three is "), weVAR("two_pluss_three")),
            htmlBR(),
            htmlP(_("End of page."))
        )
    );

    struct we_view_char_buffer* view =
        W_NEW(we_view_char_buffer, .root = doc, .size=256);

    struct we_model* model = W_NEW(we_model);
    const struct we_type* weint = W_NEW(we_type_int);
    int two_pluss_three = 2 + 3;

    W_CALL(model,bind_ptr)("two_pluss_three", weint, &two_pluss_three);

    W_CALL(view,expand)(model);
    printf("%s\n", view->buffer);
    W_CALL_VOID(view,free);
    W_CALL_VOID(model,free);
    W_CALL_VOID(weint,free);

    return 0;
}

