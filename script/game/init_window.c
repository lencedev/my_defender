/*
** EPITECH PROJECT, 2022
** B-MUL-200-MPL-2-1-mydefender-hippolyte.aubert
** File description:
** init_window
*/

#include "../../include/my.h"

sfRenderWindow *init_window(unsigned int w, unsigned int h, char *title)
{
    sfRenderWindow *window;

    sfVideoMode mode = {w, h, 32};
    window = sfRenderWindow_create(mode, title, sfFullscreen, NULL);
    return window;
}
