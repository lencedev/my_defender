/*
** EPITECH PROJECT, 2022
** B-MUL-200-MPL-2-1-mydefender-hippolyte.aubert
** File description:
** shop
*/

#include "my.h"

#ifndef SHOP_H_
    #define SHOP_H_

    #include "tools.h"

typedef struct shop_settings_t {
    const btn_set_t *btn_buy;
    const btn_set_t *btn_upgrade;
    int buy_p;
    int upgrade_p;
} shop_set_t;

typedef struct shop_t {
    btn_t btn_buy;
    btn_t btn_upgrade;
    int buy_p;
    int upgrade_p;
} shop_t;

typedef struct golds_t {
    sfText *text;
    sfFont *font;
    int size;
    float golds;
    float timer;
} golds_t;

#endif /* !SHOP_H_ */
