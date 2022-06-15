/*
** EPITECH PROJECT, 2022
** B-MUL-200-MPL-2-1-mydefender-hippolyte.aubert
** File description:
** bg_animation
*/

#include "../../include/game.h"

void move_bg(bg_t *bg, float time)
{
    bg->pos.x -= bg->speed * time;
    if (bg->pos.x <= -1920)
        bg->pos.x = 0;
    sfSprite_setPosition(bg->sprite, bg->pos);
}

void display_bg(game_t *game)
{
    DRAW_S(game->window, game->img[BLACK].sprite);

    for (int i = 0; i != 2; i++) {
        if (!game->init.pause)
            move_bg(&game->bg[i], game->delta);
        DRAW_S(game->window, game->bg[i].sprite);
    }
}
