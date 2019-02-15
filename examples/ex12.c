#include <web_elements/web_elements.h>

int main(int argc, char** argv)
{
    we_init(argc, argv);

    struct we* doc = htmlHTML(
        htmlHEAD(
            htmlTITLE(_("An Example Page"))
        ),
        htmlBODY(
            htmlP(_("This page was created using Web Elements.")),
            htmlP(_("The value of magic variable f is "), weVAR("f")),
            htmlBR(),
            htmlP(_("End of page."))
        )
    );

    struct we_view_char_buffer* view =
        W_NEW(we_view_char_buffer, .root = doc, .size=256);

    struct we_model* model = W_NEW(we_model);
    float f = 17.13f;

    W_CALL(model,bind_ptr)("f", weTYPE(float), &f);

    W_CALL(view,expand)(model);
    printf("%s\n", view->buffer);
    W_CALL_VOID(view,free);
    W_CALL_VOID(model,free);

    we_shutdown();

    return 0;
}

