/*
** EPITECH PROJECT, 2022
** B-MUL-200-MPL-2-1-mydefender-hippolyte.aubert
** File description:
** parsing
*/

#include "../../include/tools.h"

int str_length(const char *buf)
{
    int i = 0;
    for (; buf[i] != '\n'; i++);
    return i;
}

int str_line(int line, const char *str)
{
    int cpt = 0;
    int a = 0;

    for (; *str && cpt < line; str++)
        cpt += *str == '\n' ? 1 : 0;
        for (; *str && *str != '\n'; str++)
            a++;
    return a;
}

int line_length(int nb, const char *buf)
{
    int i = 0;
    int j = 0;
    for (; i < nb; j++)
        if (buf[j] == '\n')
            i++;
    return j;
}

char *parse_nb(int nb, const char *av)
{
    int len = line_length(nb, av);
    char *buf = malloc(len + 1);
    int j = 0;

    for (int i = len; av[i] != '\n'; i++)
        buf[j++] = av[i];
    buf[j] = '\0';
    return buf;
}

char *parse_name(const char *av)
{
    int length = str_length(av);
    char *buf = malloc(length + 1);

    for (int i = 0; av[i] && av[i] != '\n'; i++)
        buf[i] = av[i];
    buf[length] = '\0';
    return buf;
}
