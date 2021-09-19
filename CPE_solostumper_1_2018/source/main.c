/*
** EPITECH PROJECT, 2018
** solo
** File description:
** project
*/

#include "my.h"

char	*sort_words(char *str)
{
    char ptr;
    int j = 0;

    for (j = 0; str[j] != '\0'; j++) {
        if (str[j] < str[j+1]) {
            ptr = str[j];
            str[j] = str[j+1];
            str[j + 1] = ptr;
        } else {
            return str;
        }
    }
    str[j] = '\0';
    return str;
}

int	main(int ac, char **av)
{
    if (ac != 2 || av[1] == NULL) {
        my_putstr("\n");
        return (84);
    }

    char *str = sort_words(av[1]);
    my_putstr(str);
    my_putstr("\n");
    return 0;
}
