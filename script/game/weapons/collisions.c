/*
** EPITECH PROJECT, 2022
** B-MUL-200-MPL-2-1-mydefender-hippolyte.aubert
** File description:
** collisions
*/

#include "../../../include/game.h"

void obito_collision(hitbox_t *hitbox, enemies_t *enemies)
{
    sfVector2f pos = sfRectangleShape_getPosition(hitbox->shape);
    sfVector2f enemies_pos = sfRectangleShape_getPosition(enemies->shape);

    if ((enemies->pos.x >= pos.x && enemies->pos.x <= pos.x +
    hitbox->range.x && enemies->pos.y >= pos.y && enemies->pos.y
    <= pos.y + hitbox->range.y)
    && !enemies->obito && hitbox->bullet > -20){
        enemies->dead = sfTrue;
        hitbox->bullet--;
        enemies->obito = sfTrue;
    }
}

void vent_collision(hitbox_t *hitbox, enemies_t *enemies)
{
    sfVector2f pos = sfRectangleShape_getPosition(hitbox->shape);
    sfVector2f enemies_pos = sfRectangleShape_getPosition(enemies->shape);

    if ((pos.x + 10 >= enemies_pos.x && pos.x
    <= enemies_pos.x + 32) && ((int)pos.y + ((int)hitbox->range.y / 2)
    >= (int)enemies_pos.y + ((int)enemies->rs.height / 2) - 5)
    && ((int)pos.y + ((int)hitbox->range.y / 2)
    <= (int)enemies_pos.y + ((int)enemies->rs.height / 2) + 5)
    && !enemies->vent && hitbox->bullet > -2){
        enemies->dead = sfTrue;
        hitbox->bullet--;
        enemies->vent = sfTrue;
    }
}

void gun_collision(hitbox_t *hitbox, enemies_t *enemies)
{
    sfVector2f pos = sfRectangleShape_getPosition(hitbox->shape);
    sfVector2f enemies_pos = sfRectangleShape_getPosition(enemies->shape);

    if ((pos.x + hitbox->range.x >= enemies_pos.x && pos.x
    <= enemies_pos.x + 32) && ((int)pos.y + ((int)hitbox->range.y / 2)
    >= (int)enemies_pos.y + ((int)enemies->rs.height / 2) - 5)
    && ((int)pos.y + ((int)hitbox->range.y / 2)
    <= (int)enemies_pos.y + ((int)enemies->rs.height / 2) + 5)
    && !enemies->gun && hitbox->bullet > -5){
        enemies->dead = sfTrue;
        hitbox->bullet++;
        enemies->gun = sfTrue;
    }
}

void sniper_collision(hitbox_t *hitbox, enemies_t *enemies)
{
    sfVector2f pos = sfRectangleShape_getPosition(hitbox->shape);
    sfVector2f enemies_pos = sfRectangleShape_getPosition(enemies->shape);

    if ((pos.x + hitbox->range.x >= enemies_pos.x && pos.x
    <= enemies_pos.x + 32) && ((int)pos.y + ((int)hitbox->range.y / 2)
    >= (int)enemies_pos.y + ((int)enemies->rs.height / 2) - 5)
    && ((int)pos.y + ((int)hitbox->range.y / 2)
    <= (int)enemies_pos.y + ((int)enemies->rs.height / 2) + 5)
    && !enemies->sniper && hitbox->bullet > -100){
        enemies->dead = sfTrue;
        hitbox->bullet--;
        enemies->sniper = sfTrue;
    }
}
