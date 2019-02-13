CFLAGS=-g -Wall -Wextra -I/usr/include/web_elements
SRCS = $(wildcard *.c)
PROGS = $(patsubst %.c,%,$(SRCS))
LIBS = /usr/lib/web_elements/libwe.a

all: $(PROGS)
%: %.c
	$(CC) $(CFLAGS) -o $@ $< $(LIBS)


clean:
	rm -f *~ $(PROGS)

.PHONY: clean run
