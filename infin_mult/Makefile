##
## EPITECH PROJECT, 2019
## eval_expr_2019
## File description:
## Makefile
##

SRC	=	main.c				\
		infin_mult.c			\
		my_add_zero_pt.c		\
		my_rem_zero_pt.c		\
		my_malloc_tab.c			\
		infin_add.c			\
		my_free_tab_ptr.c		\
		my_gen_list.c	\

CC	=	gcc

OBJ	=	$(SRC:%.c=%.o)

NAME	=	infin_mult

RM	=	rm -f

LIBPATH	=	../lib/my/

INCLUDE =	-I $(LIBPATH)include/

CFLAGS = 	-W -Wall -Wpedantic -Wextra -Wshadow -Wformat-overflow -pipe -O2 $(INCLUDE)

CFLAGSDEBUG = 	-Og -g3 -Q -v

LIB = 		-L $(LIBPATH) -lmy

all: $(OBJ)
	$(MAKE) -C $(LIBPATH)
	$(CC) $(OBJ) -o $(NAME) $(LIB)


debug: $(OBJ)
	$(MAKE) -C $(LIBPATH)
	$(CC) $(OBJ) -o $(NAME) $(CFLAGSDEBUG) $(LIB)
	gdb ./$(NAME)

valgrind: $(OBJ)
	$(MAKE) -C $(LIBPATH)
	$(CC) $(OBJ) -o $(NAME) $(CFLAGSDEBUG) $(LIB)

clean:
	rm -f $(OBJ)

fclean: clean
	$(RM) $(NAME)
	$(MAKE) fclean -C $(LIBPATH)

re:	clean all

lib_re:
	$(MAKE) -C $(LIBPATH) re

lib_fclean:
	$(MAKE) -C $(LIBPATH) fclean

lib_clean:
	$(MAKE) -C $(LIBPATH) clean

tests_run:
	$(MAKE) -C tests/ tests_run
