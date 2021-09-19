/*
** EPITECH PROJECT, 2018
** solo
** File description:
** project
*/

#include "my.h"

int   my_palindrome(char *name)
{
    int k = my_strlen(name);
    char *str = malloc(sizeof(char *) * k + 1);
    int count = 0;

    for (int j = 0; j <= k; j++)
        str[j] = name[j];
    for (int t = 0; str[t] != '\0'; t++) {
        if (str[t] >= 97 && str[t] <= 122)
            str[t] = str[t] - 32;
    }
    for (int i = 0; i <= k-2; i++) {
        if (str[i+1] == str[i+2])
            count++;
    }
    if (str[0] == str[k-1] && count == k - 3)
        return (1);
    else
        return (84);
}

int	main(int ac, char **av)
{
    int a = 0;

    if (ac != 2) {
        my_putstr("Error: missing arguments.");
        my_putstr("Exit status: 84");
        return (84);
    }

    a = my_palindrome(av[1]);
    if (a == 1)
        my_putstr("palindrome!\n");
    else
        my_putstr("not a palindrome.\n");
    return (0);
}
