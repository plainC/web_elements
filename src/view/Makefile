CFLAGS =                       \
	-I ../include          \
	-I .                   \
	-I ..                  \
	-g                     \
	-Wall                  \
	-Wextra                \


SRCS =                         \
	we_view.c              \


CLASSES = $(patsubst %.c,%_class.h,$(SRCS))
OBJS = $(patsubst %.c,%.o,$(SRCS))

all: libwe_views.a unit_test

libwe_views.a: $(OBJS)
	ar r $@ $^
	ranlib $@


unit_test: libwe_views.a unit_test.c
	cc $(CFLAGS) -o unit_test unit_test.c libwe_views.a

clean:
	rm -f unit_test $(OBJS) $(GEN_HEADERS) *.gch libwe_views.a

$(OBJS): $(CLASSES)
