##
## Makefile for asm_minilibc in /home/work/work/projects/asm_minilibc_doc/asm_minilibc/tests
## 
## Made by Bastien DHIVER
## Login   <dhiver_b@epitech.net>
## 
## Started on  Thu Mar 17 11:08:59 2016 Bastien DHIVER
## Last update Fri Mar 25 09:32:16 2016 Bastien DHIVER
##

CC	= gcc

RM	= rm -f

CFLAGS	+= -W -Wextra -pedantic
CFLAGS	+= -Werror
CFLAGS	+= -g -fno-builtin
CFLAGS	+= -I../include/ -I.
CFLAGS	+= 

SLIB	= ../libasm.so

SLIB_B	= ../libasmbonus.so

NAME	= run_for_tests

NOWHERE	= /dev/null

SRCS	= $(SRCF)test_main.c		\
	  $(SRCF)tests_strlen.c		\
	  $(SRCF)tests_strdup.c		\
	  $(SRCF)tests_strchr.c		\
	  $(SRCF)tests_memset.c		\
	  $(SRCF)tests_memcpy.c		\
	  $(SRCF)tests_memmove.c	\
	  $(SRCF)tests_rindex.c		\
	  $(SRCF)tests_strncmp.c	\
	  $(SRCF)tests_strcmp.c		\
	  $(SRCF)tests_strstr.c		\
	  $(SRCF)tests_strcasecmp.c	\
	  $(SRCF)tests_strpbrk.c	\
	  $(SRCF)tests_strcspn.c

OBJS	= $(SRCS:.c=.o)


$(NAME): $(OBJS)
	make re -C ..
	make bonus -C ..
	$(CC) -o $(NAME) $(OBJS) $(SLIB) $(SLIB_B)

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
