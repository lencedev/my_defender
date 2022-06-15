/*
** EPITECH PROJECT, 2022
** B-MUL-200-MPL-2-1-mydefender-hippolyte.aubert
** File description:
** buttons
*/

#include "../../include/tools.h"

static const btn_set_t btn_set[] = {
    {"img/btn/play.png", {0, 0, 93, 69}, {920, 150}, {93, 69}},
    {"img/btn/howtoplay.png", {0, 0, 301, 69}, {820, 250}, {301, 69}},
    {"img/btn/quit.png", {0, 0, 92, 78}, {920, 360}, {92, 78}},
    {"img/btn/resume.png", {0, 0, 141, 70}, {885, 420}, {141, 70}},
    {"img/btn/back_menu.png", {0, 0, 321, 70}, {800, 540}, {321, 70}},
    {"img/btn/leave.png", {0, 0, 117, 70}, {900, 660}, {117, 70}},
    {"img/btn/info.png", {0, 0, 175, 127}, {855, 45}, {175, 127}},
    {"img/shop/cross2.png", {0, 0, 118, 108}, {1800, 10}, {118, 108}},
    {"img/shop/cross2.png", {0, 0, 118, 108}, {1800, 10}, {118, 108}},
};

btn_t init_btn(const btn_set_t *btn_set)
{
    btn_t btn = {0};
    btn.sprite = sfSprite_create();
    btn.shape = sfRectangleShape_create();
    btn.texture = sfTexture_createFromFile(btn_set->filepath, NULL);
    btn.rect = btn_set->rect;
    btn.pos = btn_set->pos;
    btn.size = btn_set->size;
    btn.hovered = sfFalse;
    sfColor none = {0, 0, 0, 0};

    sfRectangleShape_setTextureRect(btn.shape, btn.rect);
    sfRectangleShape_setSize(btn.shape, btn.size);
    sfSprite_setTexture(btn.sprite, btn.texture, sfTrue);
    sfRectangleShape_setPosition(btn.shape, btn.pos);
    sfSprite_setPosition(btn.sprite, btn.pos);
    sfRectangleShape_setFillColor(btn.shape, none);
    sfSprite_setTextureRect(btn.sprite, btn.rect);

    return btn;
}

btn_t *init_btn_tab(void)
{
    btn_t *btn = malloc(sizeof(btn_t) * 9);

    for (int i = 0; i != 9; i++)
        btn[i] = init_btn(&btn_set[i]);
    return btn;
}
