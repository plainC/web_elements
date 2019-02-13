CFLAGS =                       \
	-I ../include          \
	-I .                   \
	-I ..                  \
	-g                     \
	-Wall                  \
	-Wextra                \


SRCS =                         \
	we.c                   \
	we_string.c            \

LIBS =                         \
	../view/libwe_views.a             \

CLASSES = $(patsubst %.c,%_class.h,$(SRCS))
OBJS = $(patsubst %.c,%.o,$(SRCS))

all: libwe_elems.a unit_test


libwe_elems.a: $(OBJS)
	ar r $@ $^
	ranlib $@


unit_test: libwe_elems.a unit_test.c
	cc $(CFLAGS) -o unit_test unit_test.c libwe_elems.a $(LIBS)

clean:
	rm -f unit_test $(OBJS) $(GEN_HEADERS) *.gch libwe_elems.a

$(OBJS): $(CLASSES)
