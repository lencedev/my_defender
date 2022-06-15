/*
** EPITECH PROJECT, 2022
** B-MUL-200-MPL-2-1-mydefender-hippolyte.aubert
** File description:
** bg
*/

#include "../../include/tools.h"

static const bg_set_t bg_set[] = {
    {"img/bg/sb_3840.png", 10},
    {"img/bg/fb_3840.png", 40},
};

bg_t init_bg(const bg_set_t *set)
{
    bg_t bg;

    bg.sprite = sfSprite_create();
    bg.texture = sfTexture_createFromFile(set->path, NULL);
    bg.pos = (sfVector2f){0, 0};
    bg.speed = set->speed;

    sfSprite_setTexture(bg.sprite, bg.texture, sfTrue);
    return bg;
}

bg_t *init_bg_tab(void)
{
    bg_t *tab = malloc(sizeof(bg_t) * 2);

    for (int i = 0; i != 2; i++)
        tab[i] = init_bg(&bg_set[i]);
    return tab;
}
