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

Element Types
* a string element
* a HTML element (all HTML5 elements supported)
* a HTML attribute element (all HTML attributes supported)
* a preliminary CSS element (selectors are given as strings currently)
* a CSS declaration element
* a CSS property element (most CSS3 properties supported)
* a preliminary CSS value element
  * all CSS enumerated values supported
  * CSS rgb colors
  * CSS named colors

String Template System
* a view (holding document) and a model (holding mappings) can be fully separated
* a model holds named variables which can change values
* when view is expanded the values are read from the model
* we also support conditional expansion (part of document is only expanded if
  a condition variable in the model is set true)

Very easy to use from C level since fluent style construction is supported.
Parser from string form to elements is not yet supported.

## Example

See examples under web_elements/examples. Here is a simple example attached.

```C
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
    const struct we_type* weint = W_NEW(we_int);
    int two_pluss_three = 2 + 3;

    W_CALL(model,bind_ptr)("two_pluss_three", weint, &two_pluss_three);

    W_CALL(view,expand)(model);
    printf("%s\n", view->buffer);
    W_CALL_VOID(view,free);
    W_CALL_VOID(model,free);
    W_CALL_VOID(weint,free);

    return 0;
}
```
