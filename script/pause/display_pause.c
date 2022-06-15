/*
** EPITECH PROJECT, 2022
** B-MUL-200-MPL-2-1-mydefender-hippolyte.aubert
** File description:
** display_pause
*/

#include "../../include/game.h"

void display_pause(game_t *game)
{
    for (int i = 3; i != 6; i++)
        draw_buttons_animation(game, &game->btn[i]);

    DRAW_S(game->window, game->img[PAUSE_BG].sprite);
}
