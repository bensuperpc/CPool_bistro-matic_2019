##
## EPITECH PROJECT, 2019
## CPool_bistro-matic_2019
## File description:
## Makefile
##

SRC	=	test_find_base_error.c				\
		../lib/my/source/error/find_base_error.c 	\
		test_change_expr.c 				\
		../change_expr.c 				\
		test_my_print_error.c 				\
		../lib/my/source/error/my_print_error.c 	\
		test_my_returns_args.c 				\
		infinadd_tests/test_my_revstr_pt.c		\
		infinadd_tests/test_my_strcat_ptr.c		\
		infinadd_tests/test_my_inv_two_str_pt.c		\
		../infin_add/my_add_zero_pt.c			\
		infinadd_tests/test_my_add_zero_pt.c		\
		../infin_add/my_rem_zero_pt.c			\
		infinadd_tests/test_my_rem_zero_pt.c		\
		../infin_add/infin_add.c			\
		../infin_add/my_gen_list.c			\
		infinadd_tests/test_infin_add.c			\
		eval_expr_tests/test_my_strchr.c		\
		eval_expr_tests/test_my_strrchr.c		\
		eval_expr_tests/test_my_str_ins.c		\
		infinadd_tests/test_my_str_compare.c		\
		test_evalexpr.c 				\
		../eval_expr.c 					\
		test_make_process.c 				\
		../my_count_with_priority.c 			\
		infinmult_tests/test_infin_mult.c		\
		../infin_mult/my_malloc_tab.c			\
		../infin_mult/my_free_tab_ptr.c			\
		../infin_mult/infin_mult.c			\
		../infin_div.c					\
		test_infin_div.c				\
		../infin_mod.c 					\

CC	=	gcc

OBJ	=	$(SRC:%.c=%.o)

NAME = 		../unit_tests

LIBPATH	=	../lib/my/

INCLUDE =	-I $(LIBPATH)include/

CFLAGS = 	-W -Wall -Wpedantic -Wextra -Wformat-overflow -pipe -g -O0  $(INCLUDE)

LFLAGS	= 	-lgcov --coverage

DFLAGS	=	-lcriterion -fprofile-arcs -ftest-coverage -lgcov

LIB = 		-L $(LIBPATH) -lmy

all: $(OBJ)
	$(MAKE) -C $(LIBPATH)
	$(CC) $(OBJ) $(DFLAGS) -o $(NAME) $(LIB)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME) ../$(NAME)

re:	clean all

tests_run: $(OBJ)
	$(MAKE) -C $(LIBPATH)
	$(CC) $(OBJ) $(DFLAGS) -o $(NAME) $(LIB)
