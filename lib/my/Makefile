##
## EPITECH PROJECT, 2019
## lib
## File description:
## Makefile
##

SRC	=	$(shell find . -name '*.c')

OBJ	=	$(SRC:%.c=%.o)

CC	=	gcc

INCLUDE =	-I include/

RM = rm -f

NAME	=	libmy.a

CFLAGS	= 	$(INCLUDE) -W -Wall -Wextra -Wshadow -O2 -pipe $(LIB)

all: $(OBJ)
	ar r $(NAME) $(OBJ)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re:	clean all
