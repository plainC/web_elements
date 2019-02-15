CFLAGS =                       \
	-I ../include          \
	-I .                   \
	-g                     \
	-Wall                  \
	-Wextra                \


SRCS =                         \
	we_type.c              \
	we_type_int.c          \
	we_type_double.c       \
	we_type_string.c       \
	we_type_time_t.c       \


CLASSES = $(patsubst %.c,%_class.h,$(SRCS))
OBJS = $(patsubst %.c,%.o,$(SRCS))

all: libwe_types.a unit_test

libwe_types.a: $(OBJS)
	ar r $@ $^
	ranlib $@


unit_test: libwe_types.a unit_test.c
	cc $(CFLAGS) -o unit_test unit_test.c libwe_types.a

clean:
	rm -f unit_test $(OBJS) $(GEN_HEADERS) *.gch libwe_types.a

$(OBJS): $(CLASSES)
