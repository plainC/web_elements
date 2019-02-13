CFLAGS = \
	-I . \

LIBS =                             \
        view/libwe_views.a         \
        model/libwe_models.a       \
        model/types/libwe_types.a  \
        elems/libwe_elems.a  \

all: web_elements test

web_elements:
	cd model && make all
	cd view && make all
	cd elems && make all

test: test.c
	gcc -o test $(CFLAGS) test.c $(LIBS)

clean:
	cd model && make clean
	cd view && make clean
	cd elems && make clean
	rm -f test

