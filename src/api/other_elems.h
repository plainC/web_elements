#ifndef __WE_API_VIEW_H
#define __WE_API_VIEW_H

#define _(str) W_NEW(we_elem_string, .ptr = str)
#define weVAR(n) W_NEW(we_elem_var, .name = # n)
#define weCOND(n,c) W_NEW(we_elem_cond, .name = # n, .child = c)
#define weTYPE(t) we_type_ ## t

void we_init(int argc, char** argv);
void we_shutdown();

#endif

