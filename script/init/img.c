/*
** EPITECH PROJECT, 2022
** B-MUL-200-MPL-2-1-mydefender-hippolyte.aubert
** File description:
** img
*/

#include "../../include/tools.h"

static const img_set_t img_set[] = {
    {"img/bg/amongus.png", {0, 0}},
    {"img/bg/shop_2.png", {0, 0}},
    {"img/bg/pause_screen.png", {0, 0}},
    {"img/upgrade_price.png", {0, 0}},
    {"img/bg/map.png", {0, 0}},
    {"img/bg/black.jpg", {0, 0}},
    {"img/bg/loose.png", {0, 0}},
    {"img/bg/how_to_play.png", {0, 0}},
};

img_t init_img(const img_set_t *set)
{
    img_t img = {0};

    img.sprite = sfSprite_create();
    img.texture = sfTexture_createFromFile(set->path, NULL);
    img.pos = set->position;

    sfSprite_setTexture(img.sprite, img.texture, sfTrue);
    return img;
}

img_t *init_img_tab(void)
{
    img_t *tab = malloc(sizeof(img_t) * 8);

    for (int i = 0; i != 8; i++)
        tab[i] = init_img(&img_set[i]);
    return tab;
}
