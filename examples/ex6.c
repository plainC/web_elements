#include <web_elements/web_elements.h>


int main()
{
    struct we* doc = css(css_select_all,css_decl(css_property(position),css_value(relative)));

    struct we_view_char_buffer* view =
        W_NEW(we_view_char_buffer, .root = doc, .size=256);

    W_CALL(view,expand)(NULL);
    printf("%s\n", view->buffer);
    W_CALL_VOID(view,free);

    return 0;
}

