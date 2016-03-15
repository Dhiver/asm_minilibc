CC	= gcc

RM	= rm -f

CFLAGS	+= -W -Wextra -pedantic
CFLAGS	+= -Werror
CFLAGS	+= -g
CFLAGS	+= -I../include/ -I.

SLIB	= ../libasm.so

NAME	= run_for_tests

NOWHERE	= /dev/null

SRCS	= $(SRCF)test_main.c		\
	  $(SRCF)tests_strlen.c		\
	  $(SRCF)tests_strchr.c		\
	  $(SRCF)tests_memset.c		\
	  $(SRCF)tests_memcpy.c

OBJS	= $(SRCS:.c=.o)


$(NAME): $(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(SLIB)

all: $(NAME)

tests: $(NAME)
	@echo
	@echo
	LD_LIBRARY_PATH=.. ./$(NAME)
	@make fclean > /dev/null $(NOWHERE)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
