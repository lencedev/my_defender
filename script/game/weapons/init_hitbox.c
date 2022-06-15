/*
** EPITECH PROJECT, 2022
** B-MUL-200-MPL-2-1-mydefender-hippolyte.aubert
** File description:
** init_hitbox
*/

#include "../../../include/weapons.h"

hitbox_t init_hitbox(hitbox_set_t *set)
{
    hitbox_t hitbox = {0};

    hitbox.shape = sfRectangleShape_create();
    hitbox.range = set->range;
    hitbox.pos = set->pos;
    hitbox.upgrade_range = set->upgrade_range;
    hitbox.entered = sfFalse;
    hitbox.bullet = 1;
    hitbox.none = (sfColor){0, 0, 0, 0};
    hitbox.yellow = (sfColor){255, 242, 0, 40};

    sfRectangleShape_setPosition(hitbox.shape, hitbox.pos);
    sfRectangleShape_setSize(hitbox.shape, hitbox.range);
    sfRectangleShape_setFillColor(hitbox.shape, hitbox.yellow);
    return hitbox;
}
