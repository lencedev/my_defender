/*
** EPITECH PROJECT, 2022
** B-MUL-200-MPL-2-1-mydefender-hippolyte.aubert
** File description:
** delta_time
*/

#include "../../include/game.h"

void delta_time(game_t *game, sfTime delta_time)
{
    delta_time = sfClock_getElapsedTime(game->delta_clock);
    sfClock_restart(game->delta_clock);

    game->delta = delta_time.microseconds / 1000000.0;
    sfVector2i mp = sfMouse_getPositionRenderWindow(game->window);
    game->mp = (sfVector2f){mp.x, mp.y};
}
