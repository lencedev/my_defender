/*
** EPITECH PROJECT, 2022
** B-MUL-200-MPL-2-1-mydefender-hippolyte.aubert
** File description:
** enemies
*/

#include "my.h"

#ifndef ENEMIES_H_
    #define ENEMIES_H_

typedef struct enemies_set_t {
    char *filepath;
    int speed;
    int dmg;
    sfVector2f pos;
} enemies_set_t;

typedef struct enemies_t {
    sfSprite *sprite;
    sfTexture *texture;
    sfIntRect rs;
    sfIntRect rs_sniper;
    sfIntRect rs_vent;
    sfIntRect rs_gun;
    sfIntRect rs_obito;
    sfRectangleShape *shape;
    sfVector2f pos;
    sfVector2f def_pos;
    sfVector2f size;
    sfBool sniper;
    sfBool vent;
    sfBool gun;
    sfBool obito;
    int golds;
    float dmg;
    int frame;
    float speed;
    float timer;
    sfBool dead;
    sfBool move1;
    sfBool move2;
    sfBool move3;
    sfBool move4;
    sfBool move5;
} enemies_t;

#endif /* !ENEMIS_H_ */
