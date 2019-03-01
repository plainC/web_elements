#ifndef WDEBUG_EXPAND
# include <wondermacros/misc/unused.h>
#endif


#include "we_view_char_buffer.h"

/* Begin class implementation. */
#include "we_view_char_buffer_class.h"
#include <wondermacros/objects/x/class_start.h>


CONSTRUCT(we_view_char_buffer) /* self */
{
    if (self->size && !self->buffer)
        self->buffer = malloc(self->size);
    self->pos = 0;
}

FINALIZE(we_view_char_buffer) /* self */
{
    free(self->buffer);
    if (self->root)
        W_CALL_VOID(self->root,free);
}

METHOD(we_view_char_buffer,public,void,clear)
{
    self->pos = 0;
}

METHOD(we_view_char_buffer,public,void,write_str,
    (const char* str, int len))
{
    if (self->pos + len >= self->size)
        {} // FIXME

    strncpy(self->buffer + self->pos, str, len);
    self->pos += len;
    self->buffer[self->pos] = '\0';
}

#include <wondermacros/objects/x/class_end.h>
