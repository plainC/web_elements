#ifndef __WE_API_CSS_H
#define __WE_API_CSS_H

#include <wondermacros/meta/stringize_and_list.h>

static inline struct we_elem_css_declaration**
we_css_declarations(int n, ...)
{
    struct we_elem_css_declaration** array = NULL;
    va_list ap;
    va_start(ap,n);
    for (int i=0; i < n; i++)
        W_DYNAMIC_ARRAY_PUSH(array, va_arg(ap, struct we_elem_css_declaration*));
    va_end(ap);

    return array;
}

static inline const char**
we_string_dynamic_array(int n, ...)
{
    const char** array = NULL;
    va_list ap;
    va_start(ap,n);
    for (int i=0; i < n; i++)
        W_DYNAMIC_ARRAY_PUSH(array, strdup(va_arg(ap, const char*)));
    va_end(ap);

    return array;
}

#define css_select_all W_NEW(we_elem_css_selector)
#define css_select_class(...) BOOST_PP_OVERLOAD(_css_select_class_,__VA_ARGS_)(__VA_ARGS__)
#define _css_select_class_1(n) W_NEW(we_elem_css_selector_cls, .name=#n)
#define _css_select_class_2(e,n) W_NEW(we_elem_css_selector_cls, .elem = #e, .name=#n)
#define css_select_id(n) W_NEW(we_elem_css_selector_id, .name=#n)
#define css_select_elem(...) W_NEW(we_elem_css_selector_elem, .elems=we_string_dynamic_array(BOOST_PP_VARIADIC_SIZE(__VA_ARGS__),W_STRINGIZE_AND_LIST(__VA_ARGS__)))

#define css_value(v) W_NEW(we_elem_css_value, .tag = we_elem_css_value_tag_ ## v)
#define css_color_rgb(R,G,B) W_NEW(we_elem_css_value_color, .r = R, .g = G, .b = B)
#define css_color(name) W_NEW(we_elem_css_value_color_named, .color_tag = we_elem_css_color_name_tag_ ## name)
#define css_length(v,u) W_NEW(we_elem_css_value_length, .length = v, .unit = we_elem_css_length_unit_ ## u)
#define css_number(v) W_NEW(we_elem_css_value_number, .value = v)
#define css_time(v,u) W_NEW(we_elem_css_value_time, .length = v, .unit = we_elem_css_time_unit_ ## u)
#define css_percent(v) W_NEW(we_elem_css_value_length, .length = v, .unit = we_elem_css_time_unit_percent)

#define css_property(v) W_NEW(we_elem_css_property, .tag = we_elem_css_property_tag_ ## v)
#define css_decl(pr,v) \
    W_NEW(we_elem_css_declaration, .property = pr, .value = v)
#define css(sel,...) \
    W_NEW(we_elem_css_rule, \
        .selector = sel, \
        .declarations = (void*) we_css_declarations(BOOST_PP_VARIADIC_SIZE(__VA_ARGS),__VA_ARGS__))

#endif

