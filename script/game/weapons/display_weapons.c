/*
** EPITECH PROJECT, 2022
** B-MUL-200-MPL-2-1-mydefender-hippolyte.aubert
** File description:
** display_weapons
*/

#include "../../../include/game.h"

void animation_weapon(game_t *game, int i)
{
    if (i == OBITO)
        obito_animation(game);
    if (i == VENT)
        vent_animation(game);
    if (i == GUN)
        gun_animation(game);
    if (i == SNIPER)
        sniper_animation(game);
}

void weapon_shoot(game_t *game, int i)
{
    for (int j = 0; j != NB_ENEMIES; j++) {
        if (i == OBITO)
            obito_collision(&game->weapon[i].hitbox, &game->enemies[j]);
        if (i == VENT)
            vent_collision(&game->weapon[i].hitbox, &game->enemies[j]);
        if (i == GUN)
            gun_collision(&game->weapon[i].hitbox, &game->enemies[j]);
        if (i == SNIPER)
            sniper_collision(&game->weapon[i].hitbox, &game->enemies[j]);
    }
}

void active_weapon(game_t *game, int i)
{
    animation_weapon(game, i);
    weapon_shoot(game, i);
}

void placing_weapon(game_t *game, int i)
{
    if (i < 2) {
        hover_inside(game, i);
        sfSprite_setTextureRect(game->weapon[i].weapon.sprite,
        game->weapon[i].weapon.rect);
        sfRectangleShape_setPosition(game->weapon[i].hitbox.shape, game->mp);
        sfSprite_setPosition(game->weapon[i].weapon.sprite, game->mp);
        DRAW_RS(game->window, game->weapon[i].hitbox.shape);
        DRAW_S(game->window, game->weapon[i].weapon.sprite);
    }
    if (i >= 2) {
        hover_outside(game, i);
        sfSprite_setTextureRect(game->weapon[i].weapon.sprite,
        game->weapon[i].weapon.rect);
        sfRectangleShape_setPosition(game->weapon[i].hitbox.shape, game->mp);
        sfSprite_setPosition(game->weapon[i].weapon.sprite, game->mp);
        DRAW_RS(game->window, game->weapon[i].hitbox.shape);
        DRAW_S(game->window, game->weapon[i].weapon.sprite);
    }
}

void display_weapon(game_t *game)
{
    for (int i = 0; i != 4; i++) {
        if (game->weapon[i].placing)
            placing_weapon(game, i);
        if (game->weapon[i].active)
            active_weapon(game, i);
    }
}
