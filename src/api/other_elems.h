#ifndef __WE_API_VIEW_H
#define __WE_API_VIEW_H

#define _(str) W_NEW(we_elem_string, .ptr = str)
#define weVAR(str) W_NEW(we_elem_var, .name = str)
#define weCOND(str,c) W_NEW(we_elem_cond, .name = str, .child = c)

#endif

