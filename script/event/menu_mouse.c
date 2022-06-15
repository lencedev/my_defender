/*
** EPITECH PROJECT, 2022
** B-MUL-200-MPL-2-1-mydefender-hippolyte.aubert
** File description:
** menu_mouse
*/

#include "../../include/event.h"

void htp_event(game_t *game)
{
    if (hover_buttons(game, &game->btn[CROSS_HTP]))
        game->init.htp = sfFalse;
}

void menu_mouse_event(game_t *game)
{
    if (!game->init.htp) {
        if (hover_buttons(game, &game->btn[PLAY])) {
            game->init.menu = sfFalse;
            game->init.game = sfTrue;
            sfMusic_play(game->musics.theme.music);
        }
        if (hover_buttons(game, &game->btn[QUIT]))
            sfRenderWindow_close(game->window);
        if (hover_buttons(game, &game->btn[HTP])) {
            game->init.htp = sfTrue;
        }
    }
    else
        htp_event(game);
}
