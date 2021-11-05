##
## EPITECH PROJECT, 2019
## eval_expr_2019
## File description:
## Makefile
##

SRC	=	main.c				\
		eval_expr.c			\
		my_count_with_priority.c	\
		correct_str.c			\
		change_expr.c			\
		infin_add/infin_add.c		\
		infin_add/my_add_zero_pt.c 	\
		infin_add/my_rem_zero_pt.c 	\
		infin_add/my_gen_list.c		\
		infin_mult/infin_mult.c		\
		infin_mult/my_malloc_tab.c	\
		infin_mult/my_free_tab_ptr.c	\
		infin_div.c			\
		infin_mod.c 		\

CC	=	gcc

OBJ	=	$(SRC:%.c=%.o)

NAME	=	calc

RM	=	rm -f

LIBPATH	=	lib/my/

INCLUDE =	-I $(LIBPATH)include/

CFLAGS = 	-W -Wall -Wpedantic -Wextra -Wshadow -Wformat-overflow -Wstrict-prototypes -Wmissing-prototypes -pipe $(INCLUDE)

CFLAGSDEBUG = 	-Og -g3

LIB = 		-L $(LIBPATH) -lmy

all: $(OBJ)
	$(MAKE) -C $(LIBPATH)
	$(CC) $(OBJ) -o $(NAME) $(LIB)


debug:  $(OBJ)
	$(MAKE) -C $(LIBPATH)
	$(CC) $(OBJ) -o $(NAME) $(CFLAGSDEBUG) $(LIB)
	gdb ./$(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	$(RM) $(NAME)

re:	clean all

lib_re:
	$(MAKE) -C $(LIBPATH) re

lib_fclean:
	$(MAKE) -C $(LIBPATH) fclean

lib_clean:
	$(MAKE) -C $(LIBPATH) clean

tests_run:
	$(MAKE) -C tests/ tests_run
