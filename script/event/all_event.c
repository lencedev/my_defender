/*
** EPITECH PROJECT, 2022
** B-MUL-200-MPL-2-1-mydefender-hippolyte.aubert
** File description:
** all_event
*/

#include "../../include/event.h"

void menu_event(game_t *game)
{
    if (game->event.type == sfEvtClosed)
        sfRenderWindow_close(game->window);
    if (game->event.type == sfEvtMouseButtonPressed)
        menu_mouse_event(game);
    if (game->event.type == sfEvtKeyPressed)
        menu_key_event(game);
}

// events from game status

void game_event(game_t *game)
{
    if (game->event.type == sfEvtClosed)
        sfRenderWindow_close(game->window);
    if (game->event.type == sfEvtMouseButtonPressed)
        game_mouse_event(game);
    if (game->event.type == sfEvtKeyPressed)
        game_key_event(game);
}

void end_event(game_t *game)
{
    if (game->event.type == sfEvtClosed)
        sfRenderWindow_close(game->window);
    if (game->event.type == sfEvtMouseButtonPressed)
        end_mouse_event(game);
    if (game->event.type == sfEvtKeyPressed)
        end_key_event(game);
}

void pause_event(game_t *game)
{
    if (game->event.type == sfEvtClosed)
        sfRenderWindow_close(game->window);
    if (game->event.type == sfEvtMouseButtonPressed)
        pause_mouse_event(game);
    if (game->event.type == sfEvtKeyPressed)
        pause_key_event(game);
}

void event_manager(game_t *game)
{
    if (game->init.menu)
        menu_event(game);
    if (game->init.game)
        game_event(game);
    if (game->init.pause)
        pause_event(game);
    if (game->init.end)
        end_event(game);
}
