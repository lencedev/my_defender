/*
** EPITECH PROJECT, 2022
** B-MUL-200-MPL-2-1-mydefender-hippolyte.aubert
** File description:
** base
*/

#include "../../include/game.h"

static const btn_set_t btn_set[] = {
    {"img/btn/base_animation.png", {0, 0, 140, 128}, {10, 610}, {140, 128}},
};

base_t init_base(void)
{
    base_t base;

    base.btn = init_btn(&btn_set[0]);
    base.hp = 5;
    return base;
}

void reset_enemies(enemies_t *enemies)
{
    enemies->frame = 0;
    enemies->timer = 0;
    enemies->move5 = sfFalse;
    enemies->dead = sfFalse;
    enemies->pos = enemies->def_pos;
    enemies->move1 = sfTrue;
    enemies->move2 = sfFalse;
    enemies->move3 = sfFalse;
    enemies->move4 = sfFalse;
    enemies->obito = sfFalse;
    enemies->vent = sfFalse;
    enemies->gun = sfFalse;
    enemies->sniper = sfFalse;
    sfSprite_setTextureRect(enemies->sprite, enemies->rs);
}

void enemies_collision(game_t *game)
{
    for (int i = 0; i != NB_ENEMIES; i++) {
        if (game->enemies[i].move5) {
            game->base.hp -= game->enemies[i].dmg;
            game->base.btn.rect.left += game->base.btn.rect.width
            * game->enemies[i].dmg;
            reset_enemies(&game->enemies[i]);
        }
    }
}

void display_base(game_t *game)
{
    draw_buttons(game, &game->base.btn);
    enemies_collision(game);
    if (game->base.hp <= 0) {
        game->init.game = sfFalse;
        game->init.end = sfTrue;
    }
}
