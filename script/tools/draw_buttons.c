/*
** EPITECH PROJECT, 2022
** B-MUL-200-MPL-2-1-mydefender-hippolyte.aubert
** File description:
** draw_buttons
*/

#include "../../include/game.h"

void draw_buttons_animation(game_t *game, btn_t *btn)
{
    DRAW_RS(game->window, btn->shape);
    DRAW_S(game->window, btn->sprite);
    hover_buttons(game, btn);
}

void draw_buttons(game_t *game, btn_t *btn)
{
    DRAW_RS(game->window, btn->shape);
    DRAW_S(game->window, btn->sprite);
    sfSprite_setTextureRect(btn->sprite, btn->rect);
}
