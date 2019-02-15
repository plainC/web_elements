#include <web_elements/web_elements.h>


int main()
{
    struct we* doc = css("p",css_decl(css_property(color),css_color_rgb(0xff,0x63,0x47)));

    struct we_view_char_buffer* view =
        W_NEW(we_view_char_buffer, .root = doc, .size=256);

    W_CALL(view,expand)(NULL);
    printf("%s\n", view->buffer);
    W_CALL_VOID(view,free);

    return 0;
}

