/*
** EPITECH PROJECT, 2019
** Bensuperpc
** File description:
** >my_str_to_word_array
*/

#include "my.h"

char **my_str_to_word_array(char const *str)
{
    char **result = (char **)malloc(sizeof(char *) * word_count(str) + 1);
    int word_index = 0;
    int worldlengh = 0;
    int char_index = 0;
    int y = 0;
    while (str[char_index] != '\0') {
        worldlengh = word_countsize(str, char_index);
        if (worldlengh > 0) {
            result[word_index]
                = (char *)malloc((int)sizeof(char) * worldlengh + 1);
            while (y < worldlengh && str[char_index + y] != '\0') {
                result[word_index][y] = str[char_index + y];
                y++; }
            result[word_index][y] = '\0';
            y = 0;
            word_index++;
            char_index += worldlengh - 1; }
        char_index++; }
    result[word_index] = NULL;
    return (result);
}

int word_countsize(char const *str, int debut)
{
    int i = 0;
    while (str[debut] != '\0') {
        if (char_is_alpha_num(str[debut]) == 0 && str[debut] != '\0')
            return (i);
        i++;
        debut++;
    }
    return (i);
}

int word_count(char const *str)
{
    int wordcount = 0;
    int worldlengh = 0;
    int x = 0;
    while (str[x] != '\0') {
        worldlengh = word_countsize(str, x);
        if (worldlengh > 0) {
            x += worldlengh - 1;
            wordcount++;
        }
        x++;
    }
    return (wordcount);
}

int char_is_alpha_num(char str)
{
    if (str >= '0' && str <= '9')
        return (1);
    if (str >= 'A' && str <= 'Z')
        return (1);
    if (str >= 'a' && str <= 'z')
        return (1);
    return (0);
}
