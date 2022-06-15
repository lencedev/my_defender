/*
** EPITECH PROJECT, 2022
** B-MUL-200-MPL-2-1-mydefender-hippolyte.aubert
** File description:
** weapons
*/

#include "my.h"

#ifndef WEAPONS_H_
    #define WEAPONS_H_

    #include "tools.h"

typedef struct hitbox_t {
    sfRectangleShape *shape;
    sfIntRect rect;
    sfVector2f range;
    sfVector2f pos;
    sfVector2f b_p;
    sfBool entered;
    int bullet;
    int upgrade_range;
    sfColor none;
    sfColor yellow;
} hitbox_t;

typedef struct placement_t {
    sfRectangleShape *shape;
    sfVector2f range;
    sfVector2f pos;
    sfVector2f b_p;
    sfColor none;
} placement_t;

typedef struct weapon_btn_set_t {
    sfIntRect rect;
    sfVector2f pos;
    sfVector2f size;
} weapon_btn_set_t;

typedef struct hitbox_settings_t {
    int upgrade_range;
    sfVector2f pos;
    sfVector2f range;
} hitbox_set_t;

typedef struct weapon_settings_t {
    hitbox_set_t *hitbox;
    btn_set_t *weapon;
} weapon_set_t;

typedef struct weapon_t {
    hitbox_t hitbox;
    btn_t weapon;
    int range;
    int dmg;
    sfBool placing;
    sfBool active;
} weapon_t;

hitbox_t init_hitbox(hitbox_set_t *set);

#endif /* !WEAPONS_H_ */
