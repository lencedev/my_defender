/*
** EPITECH PROJECT, 2022
** B-MUL-200-MPL-2-1-mydefender-hippolyte.aubert
** File description:
** init_game
*/

#include "../../include/game.h"

void init_bool_game(game_t *game)
{
    game->init.menu = sfTrue;
    game->init.htp = sfFalse;
    game->init.option = sfFalse;
    game->init.game = sfFalse;
    game->init.shop = sfFalse;
    game->init.placing = sfFalse;
    game->init.pause = sfFalse;
    game->init.end = sfFalse;
}

void init_tools(game_t *game)
{
    game->btn = init_btn_tab();
    game->delta_clock = sfClock_create();
    game->bg = init_bg_tab();
    game->img = init_img_tab();
    game->score = init_score(120, (sfVector2f){1300, 30});
    game->end = init_score(120, (sfVector2f){920, 520});
}

game_t init_game(int ac, char const **av)
{
    game_t game = {0};

    game.window = init_window(1920, 1080, "Defender");
    game.musics = init_music_list();
    game.mp;
    game.golds = init_golds(120, (sfVector2f){1130, 30});
    game.shop = init_shop_tab();
    game.enemies = init_enemies_tab();
    game.weapon = init_weapon_tab(ac, av);
    game.outside = init_placements_outside();
    game.inside = init_placements_inside();
    game.speed = 0;
    game.base = init_base();
    init_tools(&game);
    init_bool_game(&game);
    return game;
}
