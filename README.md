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
* CSS property elements (e.g. `css_property(color)`)
* CSS selectors
  * `*` (use `css_select_all`)
  * `.class` (use `css_select_class(intro)` or css_select_class(p,intro)`)
  * `#id` (use `css_select_id(lastname)`)
  * `elem` (use `css_select_elem(p)` or `css_select_elem(div,p)`)
* CSS value elements
  * all CSS enumerated values supported (e.g. `css_value(relative)`)
  * CSS rgb colors (e.g. `css_color_rgb(0xff,0x63,0x47)`)
  * CSS named colors (e.g. `css_color(Blue)`)
  * CSS lengths (e.g. `css_length(16,px)`)
  * CSS numbers (e.g. `css_number(0.7)`)
  * CSS percent (e.g. `css_percent(25)`)
  * CSS times (e.g. `css_time(2,s)`)
* CSS declarations (e.g. `css_decl(css_property(color),css_color(Red))`)
* CSS rules (e.g. `css_rule(css_select_all,css_decl(css_property(color),css_color(Yellow)))`)
))

### String Template System
* a view (holding a document) and a model (holding value mappings) can be fully separated
* a model holds named variables which can change values (e.g. `weVar(x)`)
* when a view is expanded the values are read from the model (a double typed pointer `double_x` can be bound to name `x`, for example, using `W_CALL(model,bind_ptr)("x", weTYPE(double), &double_x)`)
* we also support conditional expansion (a part of document is only expanded if
  a condition variable in the model is set) (e.g. `weCOND(test,htmlP(_("Only if test is true"))`)
* Supported variable types include
  * int (`weTYPE(int)`)
  * double (`weTYPE(double)`)
  * float (`weTYPE(float)`)
  * percent (`weTYPE(percent)` which is bound to a double typed pointer in C but the value is multiplied by 100 automatically when the view is expanded)
  * string (`weTYPE(string)`)
  * time_t (`weTYPE(time_t)`)

Document content is very easy to construct in C level since the API is designed for fluent style construction. See an example below.
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
