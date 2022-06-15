/*
** EPITECH PROJECT, 2022
** B-MUL-200-MPL-2-1-mydefender-hippolyte.aubert
** File description:
** move_enemies
*/

#include "../../../include/game.h"

void clock_move_enemies_1(float delta_time, enemies_t *enemies)
{
    sfSprite_setTextureRect(enemies->sprite, enemies->rs);
    sfSprite_setPosition(enemies->sprite, enemies->pos);
    if (enemies->move1)
        move_1(delta_time, enemies);
    if (enemies->move2)
        move_2(delta_time, enemies);
    if (enemies->move3)
        move_3(delta_time, enemies);
    if (enemies->move4)
        move_4(delta_time, enemies);
}

void death_animation(game_t *game, int i)
{
    if (game->enemies[i].obito)
        clock_animation_obito(game->delta, &game->enemies[i]);
    if (game->enemies[i].vent)
        clock_animation_vent(game->delta, &game->enemies[i]);
    if (game->enemies[i].gun)
        clock_animation_gun(game->delta, &game->enemies[i]);
    if (game->enemies[i].sniper)
        clock_animation_sniper(game->delta, &game->enemies[i]);
}

void draw_enemies(game_t *game, int i)
{
    if (game->enemies[i].pos.y > 100) {
        sfRectangleShape_setPosition(game->enemies[i].shape,
        game->enemies[i].pos);
        DRAW_S(game->window, game->enemies[i].sprite);
        DRAW_RS(game->window, game->enemies[i].shape);
    }
}

void move_enemies(game_t *game)
{
    for (int i = 1; i != NB_ENEMIES; i++) {

        draw_enemies(game, i);

        if (game->enemies[i].dead)
            game->golds.golds += 10;

        if (!game->init.pause) {
            clock_animation_enemies(game->delta, &game->enemies[i]);
            clock_move_enemies_1(game->delta, &game->enemies[i]);
        }
            death_animation(game, i);
    }
}
