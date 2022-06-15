/*
** EPITECH PROJECT, 2022
** B-MUL-200-MPL-2-1-mydefender-hippolyte.aubert
** File description:
** game_key
*/

#include "../../include/event.h"

void shop_key_event(game_t *game)
{
    if (game->event.type == sfEvtKeyPressed &&
            game->event.key.code == sfKeyC)
            game->init.shop = sfFalse;
    if (game->event.type == sfEvtKeyPressed &&
            game->event.key.code == sfKeyM)
        game->golds.golds += 10000;
}

void game_key_event(game_t *game)
{
    if (game->event.type == sfEvtKeyPressed &&
        game->event.key.code == sfKeyEscape) {
            game->init.pause = sfTrue;
            sfMusic_stop(game->musics.task.music);
            sfMusic_play(game->musics.task.music);
        }
    if (game->event.type == sfEvtKeyPressed &&
            game->event.key.code == sfKeyQ)
        sfRenderWindow_close(game->window);
    if (game->event.type == sfEvtKeyPressed &&
            game->event.key.code == sfKeyS) {
            game->init.shop = sfTrue;
            sfMusic_stop(game->musics.ratio.music);
            sfMusic_play(game->musics.ratio.music);
        }
    if (game->init.shop)
        shop_key_event(game);
}
