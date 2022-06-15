/*
** EPITECH PROJECT, 2022
** B-MUL-200-MPL-2-1-mydefender-hippolyte.aubert
** File description:
** btn_animation
*/

#include "../../include/game.h"

int hover_buttons(game_t *game, btn_t *btn)
{
    sfVector2i mp = sfMouse_getPositionRenderWindow(game->window);
    btn->b_p = sfRectangleShape_getPosition(btn->shape);

    sfSprite_setTextureRect(btn->sprite, btn->rect);

    if (mp.x >= btn->b_p.x && mp.x <= btn->b_p.x +
        btn->size.x && mp.y >= btn->b_p.y && mp.y
        <= btn->b_p.y + btn->size.y) {
            btn->rect.left = btn->rect.width;
            btn->hovered = sfTrue;
        return 1;
    }
    else {
        btn->rect.left = 0;
        btn->hovered = sfFalse;
        return 0;
    }
}
