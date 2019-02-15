CFLAGS =                       \
	-I ../include          \
	-I .                   \
	-g                     \
	-Wall                  \
	-Wextra                \


SRCS =                         \
	we_model.c             \


CLASSES = $(patsubst %.c,%_class.h,$(SRCS))
OBJS = $(patsubst %.c,%.o,$(SRCS))

all: libtypes we_init.o libwe_models.a unit_test

we_init.o:
	cc -c $(CFLAGS) we_init.c

libtypes:
	cd types && make all

libwe_models.a: $(OBJS)
	ar r $@ $^
	ranlib $@


unit_test: libwe_models.a unit_test.c
	cc $(CFLAGS) -o unit_test unit_test.c libwe_models.a types/libwe_types.a

clean:
	cd types && make clean
	rm -f unit_test $(OBJS) $(GEN_HEADERS) *.gch libwe_models.a we_init.o

$(OBJS): $(CLASSES)
