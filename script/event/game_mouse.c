/*
** EPITECH PROJECT, 2022
** B-MUL-200-MPL-2-1-mydefender-hippolyte.aubert
** File description:
** game_mouse
*/

#include "../../include/event.h"

void placing_mouse_event(game_t *game)
{
    for (int i = 0; i != 4; i++) {
        if (game->weapon[i].placing && (hover_outside(game, i)
        || hover_inside(game, i))) {
            game->weapon[i].placing = sfFalse;
            game->weapon[i].active = sfTrue;
        }
    }
}

void shop_mouse_event(game_t *game)
{
    for (int i = 0; i != 4; i++) {
        if (game->golds.golds >= game->shop[i].upgrade_p
        && game->shop[i].btn_upgrade.hovered) {
        game->golds.golds -= game->shop->upgrade_p;
        game->weapon[i].hitbox.range.x
        += game->weapon[i].hitbox.upgrade_range;
        }
        if (game->golds.golds >= game->shop[i].buy_p &&
            game->shop[i].btn_buy.hovered) {

            game->golds.golds -= game->shop[i].buy_p;
            game->weapon[i].placing = sfTrue;
            game->init.placing = sfTrue;
            game->init.shop = sfFalse;
        }
        if (game->btn[CROSS].hovered)
            game->init.shop = sfFalse;
    }
}

void game_mouse_event(game_t *game)
{
    if (game->init.shop)
        shop_mouse_event(game);
    else if (game->init.placing)
        placing_mouse_event(game);
}
