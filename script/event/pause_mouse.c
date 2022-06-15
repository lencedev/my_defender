/*
** EPITECH PROJECT, 2022
** B-MUL-200-MPL-2-1-mydefender-hippolyte.aubert
** File description:
** pause_mouse
*/

#include "../../include/event.h"

void pause_mouse_event(game_t *game)
{
    if (hover_buttons(game, &game->btn[RESUME]))
        game->init.pause = sfFalse;
    if (hover_buttons(game, &game->btn[BACKMENU])) {
        game->init.game = sfFalse;
        game->init.pause = sfFalse;
        game->init.menu = sfTrue;
    }
    if (hover_buttons(game, &game->btn[LEAVE]))
        sfRenderWindow_close(game->window);
}
