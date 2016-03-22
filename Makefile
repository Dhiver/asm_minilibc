##
## Makefile for asm_minilibc in /home/work/work/projects/asm_minilibc_doc/asm_minilibc
## 
## Made by Bastien DHIVER
## Login   <dhiver_b@epitech.net>
## 
## Started on  Thu Feb 25 14:48:56 2016 Bastien DHIVER
## Last update Tue Mar 22 14:10:48 2016 Bastien DHIVER
##

CC	= gcc

ASM	= nasm

RM	= rm -f

ASFLAGS	+= -f elf64

NAME	= libasm.so

SRCS	= strlen.S	\
	  strdup.S	\
	  strchr.S	\
	  memset.S	\
	  memcpy.S	\
	  strcmp.S	\
	  memmove.S	\
	  rindex.S	\
	  strncmp.S	\
	  strcasecmp.S	\
	  strstr.S	\
	  strpbrk.S

OBJS	= $(SRCS:.S=.o)

%.o: %.S
	$(ASM) $(ASFLAGS) $< -o $@

$(NAME): $(OBJS)
	$(CC) -fPIC -shared $(OBJS) -o $(NAME)

all: $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
