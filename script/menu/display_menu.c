/*
** EPITECH PROJECT, 2022
** B-MUL-200-MPL-2-1-mydefender-hippolyte.aubert
** File description:
** display_menu
*/

#include "../../include/game.h"

void display_menu_btn(game_t *game)
{
    for (int i = 0; i != 3; i++) {
        draw_buttons_animation(game, &game->btn[i]);
    }
}

void display_menu(game_t *game)
{
    if (!game->init.htp) {
        display_menu_btn(game);
        DRAW_S(game->window, game->img[MENU_BG].sprite);
    }
    else {
        DRAW_S(game->window, game->img[HTP_IMG].sprite);
        draw_buttons_animation(game, &game->btn[CROSS_HTP]);
    }
}
