/*
** EPITECH PROJECT, 2022
** B-MUL-200-MPL-2-1-mydefender-hippolyte.aubert
** File description:
** display_prices
*/

#include "../../include/game.h"

static const sfVector2f pos[] = {
    {333, 270},
    {880, 303},
    {310, 555},
    {865, 620},
};

int can_purchase(game_t *game, int i)
{
    return (game->golds.golds >= i) ? 1 : 0;
}

void display_upgrade_prices(game_t *game, int i)
{
    if (hover_buttons(game, &game->shop[i].btn_upgrade)) {
    sfSprite_setPosition(game->img[UPGRADE_PRICE].sprite, pos[i]);
    DRAW_S(game->window, game->img[UPGRADE_PRICE].sprite);
    }
}

void display_buy_prices(game_t *game, int i)
{
    hover_buttons(game, &game->shop[i].btn_buy);
}

void display_prices(game_t *game, int i)
{
    if (can_purchase(game, game->shop[i].upgrade_p))
        display_upgrade_prices(game, i);
    else
        game->shop[i].btn_upgrade.rect.left = 0;

    if (can_purchase(game, game->shop[i].buy_p))
        display_buy_prices(game, i);
    else
        game->shop[i].btn_buy.rect.left = 0;
}
