CFLAGS = \
	-I . \

DEST = /usr/include/web_elements

OBJS =                                  \
        model/we_model.o                \
        model/types/we_type.o           \
        model/types/we_int.o            \
        elems/we.o                      \
        elems/we_elem_string.o          \
        elems/we_elem_html_attr.o       \
	elems/we_elem_html.o            \
        elems/we_elem_var.o             \
        elems/we_elem_cond.o            \
        elems/we_elem_css_rule.o        \
        elems/we_elem_css_declaration.o \
        elems/we_elem_css_property.o    \
        elems/we_elem_css_value.o       \
        view/we_view.o                  \
        view/we_view_char_buffer.o      \


all: web_elements libwe.a test

libwe.a:$(OBJS)
	ar r $@ $^
	ranlib $@


web_elements:
	cd model && make all
	cd view && make all
	cd elems && make all

test: test.c
	gcc -o test $(CFLAGS) test.c libwe.a

##


install: install_dirs
	cp api/*.h $(DEST)/api
	cp model/*.h $(DEST)/model
	cp model/types/*.h $(DEST)/model/types
	cp view/*.h $(DEST)/view
	cp elems/*.h $(DEST)/elems
	cp elems/specs/*.h $(DEST)/elems/specs
	cp *.h $(DEST)
	cp libwe.a /usr/lib/web_elements

install_dirs:
	mkdir -p /usr/lib/web_elements
	mkdir -p $(DEST)
	mkdir -p $(DEST)/api
	mkdir -p $(DEST)/model
	mkdir -p $(DEST)/model/types
	mkdir -p $(DEST)/view
	mkdir -p $(DEST)/elems
	mkdir -p $(DEST)/elems/specs


clean:
	cd model && make clean
	cd view && make clean
	cd elems && make clean
	rm -f test libwe.a

