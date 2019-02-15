# web_elements

Web Elements is a web content creation framework for the C language.
We have a string template support and we aim at providing full HTML and
CSS element generation according to industry standards.  The library is
implemented using [Wondermacros](https://github.com/plainc/wondermacros)
which must be installed in order to compile and use the library.

## Installation

Install [Wondermacros](https://github.com/plainc/wondermacros).
Extract Web Elements and cd into it.
cd src && make
make install (as root)

## Features

Currently we have the following features:

### Element Types
* a string element (e.g. `_("foobar")`)
* a HTML element (all HTML5 elements supported) (e.g. `htmlTITLE(_("foobar"))`)
* a HTML attribute element (e.g. `attrID(_("Main"))`)
* a preliminary CSS element (selectors are given as strings currently)
* a CSS property element (e.g. `css_property(color)`)
* a preliminary CSS value element
  * all CSS enumerated values supported (e.g. `css_value(relative)`)
  * CSS rgb colors (e.g. `css_color_rgb(0xff,0x63,0x47)`)
  * CSS named colors (e.g. `css_color(Blue)`)
* a CSS declaration element (e.g. `css_decl(css_property(color),css_color(Red))`)
))

### String Template System
* a view (holding document) and a model (holding mappings) can be fully separated
* a model holds named variables which can change values (e.g. `weVar(x)`)
* when view is expanded the values are read from the model (a pointer `double_x` is bound to name `x`, for example, using `W_CALL(model,bind_ptr)("x", weTYPE(double), &double_x)`)
* we also support conditional expansion (part of document is only expanded if
  a condition variable in the model is set true) (e.g. `weCond(test,htmlP(_("Only if test is true"))`)
* Supported variable types include
  * int (`weTYPE(int)`)
  * double (`weTYPE(double)`)
  * float (`weTYPE(float)`)
  * string (`weTYPE(string)`)
  * time_t (`weTYPE(time_t)`)

Very easy to use from C level since fluent style construction is supported.
Parser from string form to elements is not yet supported.

## Example

See examples under web_elements/examples. Here is a simple example attached.

```C
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
            htmlP(_("Two plus three is "), weVAR(two_pluss_three)),
            htmlBR(),
            htmlP(_("End of page."))
        )
    );

    struct we_view_char_buffer* view =
        W_NEW(we_view_char_buffer, .root = doc, .size=256);

    struct we_model* model = W_NEW(we_model);
    int two_pluss_three = 2 + 3;

    W_CALL(model,bind_ptr)("two_pluss_three", weTYPE(int), &two_pluss_three);

    W_CALL(view,expand)(model);
    printf("%s\n", view->buffer);
    W_CALL_VOID(view,free);
    W_CALL_VOID(model,free);

    we_shutdown();

    return 0;
}
```
