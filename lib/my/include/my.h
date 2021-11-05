/*
** EPITECH PROJECT, 2019
** epitech, 2019
** File description:
** >define
*/

#ifndef _MY_H_
#define _MY_H_

#include <math.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

int my_putchar(char c);

char *my_strldup(char const *src);

int my_isneg(int nb);

int my_put_nbr(int nb);

void my_swap(int *a, int *b);

void my_putstr(char const *str);

int my_strlen(char const *str);

unsigned long long my_strllen(char const *str);

int my_getnbr(char const *str);

void my_sort_int_array(int *tab, int size);

int my_compute_power_rec(int nb, int power);

int my_compute_square_root(int nb);

int my_is_prime(int nb);

int my_find_prime_sup(int nb);

char *my_strcpy(char *dest, char const *src);

char *my_strncpy(char *dest, char const *src, int n);

char *my_revstr(char *str);

char *my_strstr(char *str, char const *to_find);

int my_strcmp(char const *s1, char const *s2);

int my_strncmp(char const *s1, char const *s2, int n);

char *my_strupcase(char *str);

char *my_strlowcase(char *str);

char *my_strcapitalize(char *str);

int my_str_isalpha(char const *str);

int my_str_isnum(char const *str);

int my_str_islower(char const *str);

int my_str_isupper(char const *str);

int my_str_isprintable(char const *str);

int my_showstr(char const *str);

int my_showmem(char const *str, int size);

char *my_strcat(char *dest, char const *src);

char *my_strncat(char *dest, char const *src, int nb);

char *concat_params(int argc, char **argv);

int my_show_word_array(char *const *tab);

char *my_strdup(char const *src);

char **my_str_to_word_array(char const *str);

int word_count(char const *str);

int word_countsize(char const *str, int debut);

int char_is_alpha_num(char str);

long int ext_func(char const *str);

void display_my_showmem(int value, char *str);

void ext_fonc_sort_ar(int *a, int *b);

int isalphas(char str);

int isupperalpha(char str);

int get_color(unsigned char red, unsigned char green, unsigned char blue);

int my_sort_word_array(char **tab);

void my_invert_two_str(char *st1, char *st2);

int my_count_spe_char(const char *str, char c);

int my_isnum(char c);

char *my_str_ins(char *str, char *insert_str, int pos);

char *my_strnncpy(char const *src, int b, int end);

int my_strrchr(char const *str, char c);

int my_strchr(char const *str, char c);

int my_char_is_sign(char c);

char *my_strcatl(char *str, char *insert_str);

char *my_str_assembly(char *str1, char *str2, char *str3);

char *my_strnncut(char *src, int b, int end);

int my_move_i(int arg, int i);

char *my_int_to_str(int num);

char *return_calculate_char(char *str, int i, int num, int funct);

int my_compare_char_with_str(char c, char *str, int i);

int find_base_error(char *str, int arg);

int my_print_error(char *base, char *ops, char *expr);

int find_base_error(char *str, int arg);

char *change_expr(const char *expr, const char *base, const char *ops, int arg);

int check_parenthesis(char *str);

int compare_ops_base(char *ops, char *base);

int check_expr(char *str);

int check_expr_base(char *expr, char *base, char *ops);

char *my_delete_sign(char *str);

int check_ops_error(char *expr);

void my_strcat_ptr(char **str, char *c);

int my_str_compare_inv(char *str1, char *str2);

void my_revstr_pt(char **str);

void my_inv_two_str_pt(char **str1, char **str2);

char *my_cut_str(char *str, int i, int arg);

char *my_malloc_str(char *str, int i, int arg, int len);

char *my_strcat_dup(char *dest, char const *src);

char **my_return_args(char **args, char *str, int j);

void my_strcpy_ptr(char **dest, char const *src);

int check_div_nul(char *str);

char *write_str(char *str, char *newstr, int i, int arg);

int my_getbig_nbr(int num1, int num2);

char *return_calculate_char_str(char *str, int i, char *num, int args);

char **write_first_arg(char **args, char *str, int j);

char **write_first_mult(char **args, char *str, int j);

int find_first_num(char *str, int j);

#endif
