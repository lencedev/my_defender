/*
** EPITECH PROJECT, 2022
** B-MUL-200-MPL-2-1-mydefender-hippolyte.aubert
** File description:
** destroy
*/

#include "../../include/game.h"

void destroy_game(game_t *game)
{
    free(game->enemies);
    free(game->img);
    free(game->btn);
    free(game->inside);
    free(game->outside);
    free(game->weapon);
    free(game->bg);
    free(game->shop);
}
