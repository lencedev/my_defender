/*
** EPITECH PROJECT, 2022
** B-MUL-200-MPL-2-1-mydefender-hippolyte.aubert
** File description:
** weapons_animations
*/

#include "../../../include/game.h"

void obito_animation(game_t *game)
{
    DRAW_S(game->window, game->weapon[OBITO].weapon.sprite);
    DRAW_RS(game->window, game->weapon[OBITO].hitbox.shape);
    sfSprite_setTextureRect(game->weapon[OBITO].weapon.sprite,
    game->weapon[OBITO].weapon.rect);
    sfRectangleShape_setSize(game->weapon[OBITO].hitbox.shape,
    game->weapon[OBITO].hitbox.range);
    game->weapon[OBITO].weapon.rect.left =
    game->weapon[OBITO].weapon.rect.width * 2;
    sfRectangleShape_setFillColor(game->weapon[OBITO].hitbox.shape,
    game->weapon[OBITO].hitbox.none);
}

void vent_animation(game_t *game)
{
    if (game->weapon[VENT].hitbox.bullet == 1) {
        DRAW_S(game->window, game->weapon[VENT].weapon.sprite);
        DRAW_RS(game->window, game->weapon[VENT].hitbox.shape);
        sfSprite_setTextureRect(game->weapon[VENT].weapon.sprite,
        game->weapon[VENT].weapon.rect);
        sfRectangleShape_setSize(game->weapon[VENT].hitbox.shape,
        game->weapon[VENT].hitbox.range);
        game->weapon[VENT].weapon.rect.left =
        game->weapon[VENT].weapon.rect.width * 2;
        sfRectangleShape_setFillColor(game->weapon[VENT].hitbox.shape,
        game->weapon[VENT].hitbox.none);
    }
}

void gun_animation(game_t *game)
{
    DRAW_S(game->window, game->weapon[GUN].weapon.sprite);
    DRAW_RS(game->window, game->weapon[GUN].hitbox.shape);
    sfSprite_setTextureRect(game->weapon[GUN].weapon.sprite,
    game->weapon[GUN].weapon.rect);
    sfRectangleShape_setSize(game->weapon[GUN].hitbox.shape,
    game->weapon[GUN].hitbox.range);
    game->weapon[GUN].weapon.rect.left =
    game->weapon[GUN].weapon.rect.width * 2;
    sfRectangleShape_setFillColor(game->weapon[GUN].hitbox.shape,
    game->weapon[GUN].hitbox.none);
}

void sniper_animation(game_t *game)
{
    DRAW_S(game->window, game->weapon[SNIPER].weapon.sprite);
    DRAW_RS(game->window, game->weapon[SNIPER].hitbox.shape);
    sfSprite_setTextureRect(game->weapon[SNIPER].weapon.sprite,
    game->weapon[SNIPER].weapon.rect);
    sfRectangleShape_setSize(game->weapon[SNIPER].hitbox.shape,
    game->weapon[SNIPER].hitbox.range);
    game->weapon[SNIPER].weapon.rect.left =
    game->weapon[SNIPER].weapon.rect.width * 2;
    sfRectangleShape_setFillColor(game->weapon[SNIPER].hitbox.shape,
    game->weapon[SNIPER].hitbox.none);
}
