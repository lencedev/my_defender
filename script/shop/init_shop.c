/*
** EPITECH PROJECT, 2022
** B-MUL-200-MPL-2-1-mydefender-hippolyte.aubert
** File description:
** init_shop
*/

#include "../../include/game.h"

static const btn_set_t buy_set[] = {
    {"img/btn/buy.png", {0, 0, 74, 67}, {163, 327}, {74, 67}},
    {"img/btn/buy.png", {0, 0, 74, 67}, {715, 317}, {74, 67}},
    {"img/btn/buy.png", {0, 0, 74, 67}, {151, 667}, {74, 67}},
    {"img/btn/buy.png", {0, 0, 74, 67}, {704, 677}, {74, 67}},
};

static const btn_set_t upgrade_set[] = {
    {"img/btn/upgrade.png", {0, 0, 100, 120}, {152, 415}, {100, 120}},
    {"img/btn/upgrade.png", {0, 0, 100, 120}, {700, 412}, {100, 120}},
    {"img/btn/upgrade.png", {0, 0, 100, 120}, {141, 795}, {100, 120}},
    {"img/btn/upgrade.png", {0, 0, 100, 120}, {695, 785}, {100, 120}},
};

static const shop_set_t set[] = {
    {&buy_set[0], &upgrade_set[0], 500, 300},
    {&buy_set[1], &upgrade_set[1], 1000, 300},
    {&buy_set[2], &upgrade_set[2], 1500, 300},
    {&buy_set[3], &upgrade_set[3], 3000, 300}
};

shop_t init_shop(const shop_set_t *set)
{
    shop_t shop = {0};

    shop.btn_buy = init_btn(set->btn_buy);
    shop.btn_upgrade = init_btn(set->btn_upgrade);
    shop.buy_p = set->buy_p;
    shop.upgrade_p = set->upgrade_p;
    return shop;
}

golds_t init_golds(int size, sfVector2f position)
{
    golds_t golds = {0};

    golds.text = sfText_create();
    golds.font = sfFont_createFromFile("img/among.ttf");
    golds.size = size;
    golds.golds = 1000;
    golds.timer = 0;
    sfColor gold = {255, 206, 0, 255};

    sfText_setCharacterSize(golds.text, golds.size);
    sfText_setString(golds.text, "0");
    sfText_setFont(golds.text, golds.font);
    sfText_setColor(golds.text, gold);
    sfText_setPosition(golds.text, position);
    return golds;
}

shop_t *init_shop_tab(void)
{
    shop_t *shop = malloc(sizeof(shop_t) * 4);

    for (int i = 0; i != 4; i++)
        shop[i] = init_shop(&set[i]);

    return shop;
}
