/*
** EPITECH PROJECT, 2022
** B-MUL-200-MPL-2-1-mydefender-hippolyte.aubert
** File description:
** init_placements
*/

#include "../../../include/game.h"

static const hitbox_set_t inside_set[] = {
    {0, {1525, 165}, {250, 200}},
    {0, {1575, 350}, {150, 350}},
    {0, {1040, 535}, {125, 370}},
    {0, {835, 530}, {205, 80}},
    {0, {520, 160}, {100, 670}},
    {0, {1285, 880}, {300, 100}},
    {0, {1285, 735}, {300, 100}},
    {0, {240, 600}, {150, 100}},
    {0, {620, 160}, {120, 100}},
    {0, {225, 725}, {300, 100}},
    {0, {1580, 700}, {90, 230}},
    {0, {1200, 810}, {85, 100}},
    {0, {830, 210}, {100, 320}},
    {0, {830, 30}, {100, 100}},
    {0, {915, 120}, {125, 100}},
    {0, {740, 120}, {100, 100}},
    {0, {1168, 840}, {20, 60}},
    {0, {1528, 835}, {60, 45}},
};

static const hitbox_set_t outside_set[] = {
    {0, {390, 65}, {100, 600}},
    {0, {250, 330}, {140, 200}},
    {0, {380, 830}, {360, 100}},
    {0, {1050, 420}, {250, 100}},
    {0, {950, 340}, {100, 180}},
    {0, {1730, 350}, {100, 400}},
    {0, {1470, 350}, {100, 330}},
    {0, {1000, 900}, {200, 100}},
    {0, {640, 260}, {100, 600}},
    {0, {920, 700}, {100, 300}},
    {0, {740, 700}, {180, 100}},
    {0, {1200, 520}, {100, 160}},
    {0, {1300, 580}, {200, 100}},
    {0, {740, 340}, {70, 450}},
    {0, {390, 0}, {340, 65}},
    {0, {250, 940}, {130, 130}},
    {0, {1045, 85}, {100, 200}},
    {0, {1280, 1045}, {300, 40}},
    {0, {1680, 810}, {100, 150}},
};

placement_t init_placement(const hitbox_set_t *set)
{
    placement_t placement = {0};

    placement.shape = sfRectangleShape_create();
    placement.range = set->range;
    placement.pos = set->pos;
    placement.none = (sfColor){100, 250, 100, 40};

    sfRectangleShape_setSize(placement.shape, placement.range);
    sfRectangleShape_setPosition(placement.shape, placement.pos);
    sfRectangleShape_setFillColor(placement.shape, placement.none);
    return placement;
}

placement_t *init_placements_inside(void)
{
    placement_t *inside = malloc(sizeof(placement_t) * 18);

    for (int i = 0; i != 18; i++)
        inside[i] = init_placement(&inside_set[i]);
    return inside;
}

placement_t *init_placements_outside(void)
{
    placement_t *outside = malloc(sizeof(placement_t) * 19);

    for (int i = 0; i != 19; i++)
        outside[i] = init_placement(&outside_set[i]);
    return outside;
}

int hover_inside(game_t *game, int i)
{
    sfVector2i mp = sfMouse_getPositionRenderWindow(game->window);
    int nb = 0;

    for (int j = 0; j != 18; j++) {
        DRAW_RS(game->window, game->inside[j].shape);
        if (mp.x >= game->inside[j].pos.x && mp.x <=
        game->inside[j].pos.x + game->inside[j].range.x
        && mp.y >= game->inside[j].pos.y && mp.y <=
        game->inside[j].pos.y + game->inside[j].range.y
        && i < 2)
            nb--;
        else
            nb++;
        }
        game->weapon[i].weapon.rect.left = (nb < 18) ?
        game->weapon[i].weapon.rect.width : 0;
        return (nb < 18) ? 1 : 0;
}

int hover_outside(game_t *game, int i)
{
    sfVector2i mp = sfMouse_getPositionRenderWindow(game->window);
    int nb = 0;

    for (int j = 0; j != 19; j++) {
        DRAW_RS(game->window, game->outside[j].shape);
        if (mp.x >= game->outside[j].pos.x && mp.x <=
        game->outside[j].pos.x + game->outside[j].range.x
        && mp.y >= game->outside[j].pos.y && mp.y <=
        game->outside[j].pos.y + game->outside[j].range.y
        && i >= 2)
            nb--;
        else
            nb++;
        }
        game->weapon[i].weapon.rect.left = (nb < 19) ?
        game->weapon[i].weapon.rect.width : 0;
        return (nb < 19) ? 1 : 0;
}

