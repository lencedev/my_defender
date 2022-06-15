/*
** EPITECH PROJECT, 2022
** B-MUL-200-MPL-2-1-mydefender-hippolyte.aubert
** File description:
** menu_key
*/

#include "../../include/event.h"

void menu_key_event(game_t *game)
{
    if (game->event.type == sfEvtKeyPressed &&
            game->event.key.code == sfKeyEscape)
        sfRenderWindow_close(game->window);
}
