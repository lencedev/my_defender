/*
** EPITECH PROJECT, 2022
** B-MUL-200-MPL-2-1-mydefender-hippolyte.aubert
** File description:
** open_file
*/

#include "../../include/tools.h"

#include <sys/stat.h>
#include <fcntl.h>

char *open_file(char const *av)
{
    int fd;
    int ret;
    char *buf = malloc(BUF_SIZE + 1);

    fd = open(av, O_RDONLY);
    ret = read(fd, buf, BUF_SIZE);
    buf[ret] = '\0';
    return buf;
}
