/*
** EPITECH PROJECT, 2022
** B-MUL-200-MPL-2-1-mydefender-hippolyte.aubert
** File description:
** display_shop
*/

#include "../../include/game.h"

void golds_init(game_t *game)
{
    if (!game->init.pause) {
        game->golds.timer += game->delta;
        if (game->golds.timer > 0.6) {
            game->golds.golds++;
            game->golds.timer = 0;
        }
            sfText_setString(game->golds.text, my_itoa(game->golds.golds));
    }
    sfRenderWindow_drawText(game->window, game->golds.text, NULL);
}

void display_shop_btn(game_t *game)
{
    draw_buttons_animation(game, &game->btn[CROSS]);

    for (int i = 0; i != 4; i++) {
        display_prices(game, i);
        draw_buttons_animation(game, &game->shop[i].btn_buy);
        draw_buttons_animation(game, &game->shop[i].btn_upgrade);
    }
}

void display_shop(game_t *game)
{
    DRAW_S(game->window, game->img[SHOP].sprite);
    draw_buttons_animation(game, &game->btn[INFO]);
    display_shop_btn(game);
}
