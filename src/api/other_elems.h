#ifndef __WE_API_VIEW_H
#define __WE_API_VIEW_H

static inline struct we**
we_dynamic_array(int n, ...)
{
    struct we** array = NULL;
    va_list ap;
    va_start(ap,n);
    for (int i=0; i < n; i++)
        W_DYNAMIC_ARRAY_PUSH(array, va_arg(ap, struct we*));
    va_end(ap);

    return array;
}

#define _(str) W_NEW(we_elem_string, .ptr = str)
#define weCAT(...)           \
    W_NEW(we_elem_composite, \
        .elems = (void*) we_dynamic_array(BOOST_PP_VARIADIC_SIZE(__VA_ARGS__),__VA_ARGS__))

#define weVAR(n) W_NEW(we_elem_var, .name = # n)
#define weFOREACH(e,array,...) BOOST_PP_OVERLOAD(_weFOREACH_,__VA_ARGS__)(e,array,__VA_ARGS__)
#define _weFOREACH_1(e,array,child) _weFOREACH_2(e,array,child,NULL)
#define _weFOREACH_2(e,array,child,fmt) \
    W_NEW(we_elem_foreach, .elem = # e, .name = # array, .next = child, .format = fmt)
#define weCOND(n,c) W_NEW(we_elem_cond, .name = # n, .child = c)
#define weTYPE(t) we_type_ ## t
#define weARRAY(elem_t) W_NEW(we_type_array, .elem_type = elem_t)

void we_init(int argc, char** argv);
void we_shutdown();

#endif

