#include <web_elements/web_elements.h>


int main(int argc, char** argv)
{
    we_init(argc, argv);

    struct we* doc = css("#my",css_decl(css_property(transition_delay),css_time(3,s)));

    struct we_view_char_buffer* view =
        W_NEW(we_view_char_buffer, .root = doc, .size=256);

    W_CALL(view,expand)(NULL);
    printf("%s\n", view->buffer);
    W_CALL_VOID(view,free);

    we_shutdown();

    return 0;
}

