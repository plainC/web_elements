CFLAGS =                       \
	-I ../include          \
	-I .                   \
	-I ..                  \
	-g                     \
	-Wall                  \
	-Wextra                \


SRCS =                                  \
	we.c                            \
	we_elem_string.c                \
	we_elem_html_attr.c             \
	we_elem_html.c                  \
	we_elem_var.c                   \
	we_elem_cond.c                  \
	we_elem_css_rule.c              \
	we_elem_css_declaration.c       \
	we_elem_css_property.c          \
	we_elem_css_selector.c          \
	we_elem_css_selector_cls.c      \
	we_elem_css_selector_id.c       \
	we_elem_css_value.c             \
	we_elem_css_value_color.c       \
	we_elem_css_value_color_named.c \
	we_elem_css_value_length.c      \
	we_elem_css_value_time.c        \

LIBS =                                  \
	../view/libwe_views.a           \
	../model/libwe_models.a         \
	../model/types/libwe_types.a    \

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
