/*
** EPITECH PROJECT, 2022
** B-MUL-200-MPL-2-1-mydefender-hippolyte.aubert
** File description:
** display_game
*/

#include "../../include/game.h"

void display_map(game_t *game)
{
    DRAW_S(game->window, game->img[MAP].sprite);
    score(game);
    display_base(game);
    move_enemies(game);
    display_weapon(game);
}

void display_game(game_t *game)
{
    golds_init(game);

    if (!game->init.shop)
        display_map(game);
    if (game->init.shop)
        display_shop(game);
    if (game->init.pause)
        display_pause(game);
}
