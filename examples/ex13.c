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
            htmlP(_("A percentage value is show here "), weVAR(percent)),
            htmlBR(),
            htmlP(_("End of page."))
        )
    );

    struct we_view_char_buffer* view =
        W_NEW(we_view_char_buffer, .root = doc, .size=256);

    struct we_model* model = W_NEW(we_model);
    double p = 0.1642;

    W_CALL(model,bind_ptr)("percent", weTYPE(percent), &p);

    W_CALL(view,expand)(model);
    printf("%s\n", view->buffer);
    W_CALL_VOID(view,free);
    W_CALL_VOID(model,free);

    we_shutdown();

    return 0;
}

