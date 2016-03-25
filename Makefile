##
## Makefile for asm_minilibc in /home/work/work/projects/asm_minilibc_doc/asm_minilibc
## 
## Made by Bastien DHIVER
## Login   <dhiver_b@epitech.net>
## 
## Started on  Thu Feb 25 14:48:56 2016 Bastien DHIVER
## Last update Fri Mar 25 08:55:27 2016 Bastien DHIVER
##

CC	= gcc

ASM	= nasm

RM	= rm -f

ASFLAGS	+= -f elf64

NAME	= libasm.so

NAME_B	= libasmbonus.so

BONUS_F	= bonus/

BONUS	= $(BONUS_F)strdup.S

SRCS	= strlen.S	\
	  strchr.S	\
	  memset.S	\
	  memcpy.S	\
	  strcmp.S	\
	  memmove.S	\
	  rindex.S	\
	  strncmp.S	\
	  strcasecmp.S	\
	  strstr.S	\
	  strpbrk.S	\
	  strcspn.S

OBJS	= $(SRCS:.S=.o)

OBJS_B	= $(BONUS:.S=.o)

%.o: %.S
	$(ASM) $(ASFLAGS) $< -o $@

$(NAME): $(OBJS)
	$(CC) -fPIC -shared $(OBJS) -o $(NAME)

all: $(NAME)

bonus: $(OBJS_B)
	$(CC) -fPIC -shared $(OBJS_B) -o $(NAME_B)

clean:
	$(RM) $(OBJS) $(OBJS_B)

fclean: clean
	$(RM) $(NAME) $(NAME_B)

re: fclean all

.PHONY: all clean fclean re bonus
