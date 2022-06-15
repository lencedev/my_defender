/*
** EPITECH PROJECT, 2022
** B-MUL-200-MPL-2-1-mydefender-hippolyte.aubert
** File description:
** init_enemies
*/


#include "../../../include/game.h"

static const enemies_set_t set[] = {
    {"img/red.png", 80, 1, {1612, -5500}},
    {"img/green.png", 100, 1, {1618, -5000}},
    {"img/blue.png", 120, 1, {1618, -4500}},
    {"img/red.png", 80, 1, {1612, -4000}},
    {"img/red.png", 80, 1, {1618, -3500}},
    {"img/blue.png", 120, 1, {1614, -2500}},
    {"img/green.png", 100, 1, {1620, -2000}},
    {"img/yellow.png", 200, 5, {1618, -1500}},
    {"img/red.png", 80, 1, {1614, -1000}},
    {"img/blue.png", 120, 1, {1620, -500}},
    {"img/green.png", 100, 1, {1620, -100}},
    {"img/red.png", 80, 1, {1614, 0}},
};

void init_enemies_steps(enemies_t *enemies)
{
    enemies->rs_obito = (sfIntRect){0, 685, 31, 42};
    enemies->rs_vent = (sfIntRect){0, 100, 60, 51};
    enemies->rs_gun = (sfIntRect){310, 0, 80, 45};
    enemies->rs_sniper = (sfIntRect){0, 43, 240, 59};
    enemies->obito = sfFalse;
    enemies->vent = sfFalse;
    enemies->gun = sfFalse;
    enemies->sniper = sfFalse;
    enemies->dead = sfFalse;
    enemies->move1 = sfTrue;
    enemies->move2 = sfFalse;
    enemies->move3 = sfFalse;
    enemies->move4 = sfFalse;
    enemies->move5 = sfFalse;
}

enemies_t init_enemies(const enemies_set_t set)
{
    enemies_t enemies = {0};

    init_enemies_steps(&enemies);
    enemies.rs = (sfIntRect){0, 0, 32, 43};
    enemies.speed = set.speed;
    enemies.pos = set.pos;
    enemies.def_pos = set.pos;
    enemies.shape = sfRectangleShape_create();
    enemies.size = (sfVector2f){32, 43};
    enemies.sprite = sfSprite_create();
    enemies.golds = 1;
    enemies.dmg = set.dmg;
    enemies.frame = 0;
    enemies.timer = 0;
    enemies.texture = sfTexture_createFromFile(set.filepath, NULL);
    sfColor none = {0, 0, 0, 0};

    sfSprite_setTexture(enemies.sprite, enemies.texture, sfTrue);
    sfRectangleShape_setTextureRect(enemies.shape, enemies.rs);
    sfRectangleShape_setFillColor(enemies.shape, none);
    sfSprite_setTextureRect(enemies.sprite, enemies.rs);
    sfRectangleShape_setSize(enemies.shape, enemies.size);
    return enemies;
}

enemies_t *init_enemies_tab(void)
{
    enemies_t *enemies = malloc(sizeof(enemies_t) * NB_ENEMIES);

    for (int i = 0; i != NB_ENEMIES; i++)
        enemies[i] = init_enemies(set[i]);
    return enemies;
}
