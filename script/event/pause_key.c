/*
** EPITECH PROJECT, 2022
** B-MUL-200-MPL-2-1-mydefender-hippolyte.aubert
** File description:
** pause_key
*/

#include "../../include/event.h"

void pause_key_event(game_t *game)
{
    if (game->event.type == sfEvtKeyPressed &&
            game->event.key.code == sfKeyQ)
        sfRenderWindow_close(game->window);
    if (game->event.type == sfEvtKeyPressed &&
            game->event.key.code == sfKeyP)
        game->init.pause = sfFalse;
}
