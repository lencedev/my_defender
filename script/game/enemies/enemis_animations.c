/*
** EPITECH PROJECT, 2022
** B-MUL-200-MPL-2-1-mydefender-hippolyte.aubert
** File description:
** enemies_animations
*/

#include "../../../include/game.h"

void clock_animation_obito(float delta_time, enemies_t *enemies)
{
    enemies->dead = sfFalse;
    enemies->timer = enemies->timer + (delta_time * 10);
    if (enemies->timer > 0.7 && enemies->rs_obito.left <= 310) {
        enemies->rs_obito.left += 31;
        enemies->timer = 0;
        enemies->frame++;
    }
    if (enemies->frame >= 9)
        reset_enemies(enemies);

    sfSprite_setTextureRect(enemies->sprite, enemies->rs_obito);
}

void clock_animation_vent(float delta_time, enemies_t *enemies)
{
    float pos_x = enemies->pos.x - 12;
    float pos_y = enemies->pos.y - 2;

    sfSprite_setPosition(enemies->sprite, (sfVector2f){pos_x, pos_y});

    enemies->timer = enemies->timer + (delta_time * 10);
    if (enemies->timer > 0.6 && enemies->rs_vent.left <= 300) {
        enemies->rs_vent.left += 60;
        enemies->timer = 0;
        enemies->frame++;
    }
    if (enemies->frame >= 4)
        reset_enemies(enemies);

    sfSprite_setTextureRect(enemies->sprite, enemies->rs_vent);
}

void clock_animation_gun(float delta_time, enemies_t *enemies)
{
    float pos_x = enemies->pos.x;
    float pos_y = enemies->pos.y;

    sfSprite_setPosition(enemies->sprite, (sfVector2f){pos_x, pos_y});

    enemies->timer = enemies->timer + (delta_time * 10);
    if (enemies->timer > 0.8 && enemies->rs_gun.top <= 225) {
        enemies->rs_gun.top += 60;
        enemies->timer = 0;
        enemies->frame++;
    }
    if (enemies->frame >= 4)
        reset_enemies(enemies);

    sfSprite_setTextureRect(enemies->sprite, enemies->rs_gun);
}

void clock_animation_sniper(float delta_time, enemies_t *enemies)
{
    float pos_x = enemies->pos.x - 132;
    float pos_y = enemies->pos.y - 10;

    sfSprite_setPosition(enemies->sprite, (sfVector2f){pos_x, pos_y});

    enemies->timer = enemies->timer + (delta_time * 10);
    if (enemies->timer > 0.4 && enemies->rs_gun.top <= 570){
        enemies->rs_sniper.top += 59;
        enemies->timer = 0;
        enemies->frame++;
    }
    if (enemies->frame >= 9)
        reset_enemies(enemies);

    sfSprite_setTextureRect(enemies->sprite, enemies->rs_sniper);
}

void clock_animation_enemies(float delta_time, enemies_t *enemies)
{
    enemies->timer = enemies->timer + (delta_time * 10);
    if (enemies->timer > 0.68) {
        enemies->rs.left += 32;
        enemies->timer = 0;
        if (enemies->rs.left >= 192)
            enemies->rs.left = 0;
    }
}
