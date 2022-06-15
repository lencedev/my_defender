/*
** EPITECH PROJECT, 2022
** B-MUL-200-MPL-2-1-mydefender-hippolyte.aubert
** File description:
** enemies_pathing
*/

#include "../../../include/game.h"

void move_5(float delta_time, enemies_t *enemies)
{
    if (enemies->pos.x >= 1100) {
        enemies->pos.x -= enemies->speed * delta_time;
        enemies->pos.y += random_movement() * delta_time;
        return;
    }
    if (enemies->pos.y >= 560) {
        enemies->pos.y -= enemies->speed * delta_time;
        enemies->pos.x += random_movement() * delta_time;
        return;
    }
    if (enemies->pos.x >= 860) {
        enemies->pos.x -= enemies->speed * delta_time;
        enemies->pos.y += random_movement() * delta_time;
        return;
    }
    else {
        enemies->move5 = sfTrue;
        enemies->move2 = sfFalse;
        return;
    }
}

void move_4(float delta_time, enemies_t *enemies)
{
    if (enemies->pos.x >= 545) {
        enemies->pos.x -= enemies->speed * delta_time;
        enemies->pos.y -= random_movement() * delta_time;
        return;
    }
    if (enemies->pos.y <= 760) {
        enemies->pos.y += enemies->speed * delta_time;
        enemies->pos.x -= random_movement() * delta_time;
        return;
    }
    if (enemies->pos.x >= 150) {
        enemies->pos.x -= enemies->speed * delta_time;
        enemies->pos.y += random_movement() * delta_time;
        return;
    }
    else {
        enemies->move5 = sfTrue;
        enemies->move4 = sfFalse;
        return;
    }
}

void move_3(float delta_time, enemies_t *enemies)
{
    if (enemies->pos.x >= 855) {
        enemies->pos.x -= enemies->speed * delta_time;
        enemies->pos.y += random_movement() * delta_time;
        return;
    }
    if (enemies->pos.y >= 210) {
        enemies->pos.y -= enemies->speed * delta_time;
        enemies->pos.x += random_movement() * delta_time;
        return;
    }
    if (enemies->pos.y >= 170) {
        enemies->pos.y -= enemies->speed * delta_time;
        enemies->pos.x += random_movement() * delta_time;
        return;
    }
    else {
        enemies->move4 = sfTrue;
        enemies->move3 = sfFalse;
    }
}

void move_2(float delta_time, enemies_t *enemies)
{
    if (enemies->pos.x >= 1200) {
        enemies->pos.x -= enemies->speed * delta_time;
        enemies->pos.y += (enemies->speed / 2) * delta_time;
        return;
    }
    if (enemies->pos.x >= 1100) {
        enemies->pos.x -= enemies->speed * delta_time;
        enemies->pos.y += random_movement() * delta_time;
        return;
    }
    if (enemies->pos.y >= 560) {
        enemies->pos.y -= enemies->speed * delta_time;
        enemies->pos.x += random_movement() * delta_time;
        return;
    }
    else {
        enemies->move3 = sfTrue;
        enemies->move2 = sfFalse;
    }
}

void move_1(float delta_time, enemies_t *enemies)
{
    if (enemies->pos.y <= 735) {
        enemies->pos.y += enemies->speed * delta_time;
        enemies->pos.x += random_movement() * delta_time;
        return;
    }
    if (enemies->pos.x >= 1500) {
        enemies->pos.x -= enemies->speed * delta_time;
        enemies->pos.y += (enemies->speed / 3) * delta_time;
        return;
    }
    if (enemies->pos.x >= 1300) {
        enemies->pos.x -= enemies->speed * delta_time;
        enemies->pos.y += random_movement() * delta_time;
        return;
    }
    else {
        enemies->move2 = sfTrue;
        enemies->move1 = sfFalse;
    }
}


