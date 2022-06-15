/*
** EPITECH PROJECT, 2022
** B-MUL-200-MPL-2-1-mydefender-hippolyte.aubert
** File description:
** init_weapons
*/

#include "../../../include/weapons.h"

static const sfVector2f hitbox_pos_sets[] = {
    {163, 327},
    {163, 327},
    {163, 327},
    {163, 327},
};

static const weapon_btn_set_t btn_sets[] = {
    {{0, 0, 46, 57}, {152, 415}, {46, 57}},
    {{0, 0, 50, 39}, {152, 415}, {50, 38}},
    {{0, 0, 93, 57}, {152, 415}, {93, 57}},
    {{0, 0, 95, 61}, {152, 415}, {95, 61}},
};

weapon_t init_weapon(const weapon_set_t set)
{
    weapon_t weapon = {0};

    weapon.hitbox = init_hitbox(set.hitbox);
    weapon.weapon = init_btn(set.weapon);
    weapon.active = sfFalse;
    weapon.placing = sfFalse;
    return weapon;
}

btn_set_t *sprite_set(int i, const char *av)
{
    btn_set_t *sprite = malloc(sizeof(btn_set_t));

    sprite->filepath = parse_name(av);
    sprite->pos = btn_sets[i].pos;
    sprite->rect = btn_sets[i].rect;
    sprite->size = btn_sets[i].size;
    return sprite;
}

hitbox_set_t *hitbox_set(int i, const char *av)
{
    hitbox_set_t *hitbox = malloc(sizeof(hitbox_set_t));

    hitbox->range.x = my_getnbr((parse_nb(1, av)));
    hitbox->range.y = my_getnbr((parse_nb(2, av)));
    hitbox->upgrade_range = my_getnbr((parse_nb(3, av)));
    hitbox->pos.x = hitbox_pos_sets[i].x;
    hitbox->pos.y = hitbox_pos_sets[i].y;
    return hitbox;
}

weapon_set_t set_weapon(int i, const char *av)
{
    weapon_set_t set = {0};

    set.weapon = sprite_set(i, av);
    set.hitbox = hitbox_set(i, av);
    return set;
}

weapon_t *init_weapon_tab(int ac, const char **av)
{
    weapon_t *weapon = malloc(sizeof(weapon_t) * 4);

    for (int i = 0; i != 4; i++)
        weapon[i] = init_weapon(set_weapon(i, open_file(av[i+1])));
    return weapon;
}
