/*
** EPITECH PROJECT, 2019
** EPITECH
** File description:
** solostumper 5
*/

#include "my.h"

char	*sort_words(char *name, int length)
{
    for (int i = 0; i < length; i++) {
        for (int a = 0; a < length -1; a++)
            if (name[a] > name[a+1]) {
                name[a] ^= name[a + 1];
                name[a + 1] ^= name[a];
                name[a] ^= name[a + 1];
            }
    }
    return (name);
}

int	my_anagram(char *name, char *other)
{
    int count = 0;
    char *str;
    char *str1;

    for (int t = 0; t <= my_strlen(name); t++) {
        if (name[t] >= 97 && name[t] <= 122)
            name[t] = name[t] - 32;
    }
    for (int i = 0; i <= my_strlen(name); i++) {
        if (other[i] >= 97 && other[i] <= 122)
            other[i] = other[i] - 32;
    }
    str = sort_words(name, my_strlen(name));
    str1 = sort_words(other, my_strlen(name));
    for (int s = 0; s < my_strlen(name); s++) {
        if (str[s] == str1[s])
            count++;
    }
    return (count);
}

int	main(int ac, char **av)
{
    if (ac != 3) {
        my_puterror("Error: not enough arguments.\n");
        return (84);
    }

    int j = my_strlen(av[1]);
    int k = my_strlen(av[2]);
    int a = my_anagram(av[1], av[2]);
    if (a == j && j == k){
        my_putstr("anagram!\n");
    } else {
        my_putstr("no anagrams.\n");
    }
    return (0);
}
