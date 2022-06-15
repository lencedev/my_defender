/*
** EPITECH PROJECT, 2022
** B-MUL-200-MPL-2-1-mydefender-hippolyte.aubert
** File description:
** main
*/
#include "../../include/game.h"
#include "../../include/event.h"
#include <sys/stat.h>
#include <fcntl.h>

static const char *tab[5] = {
"sniper.txt",
"obito.txt",
"vent.txt",
"gun.txt",
"sniper.txt",
};

void game_scene(game_t *game)
{
    display_bg(game);

    if (game->init.menu)
        display_menu(game);
    if (game->init.game)
        display_game(game);
    if (game->init.end)
        display_end(game);
}

void game_loop(int ac, const char **av)
{
    game_t game = init_game(ac, av);
    sfTime delta;

    sfRenderWindow_setFramerateLimit(game.window, 60);
    theme_music(game.musics.theme.music);

    while (sfRenderWindow_isOpen(game.window)) {
        delta_time(&game, delta);
        while (sfRenderWindow_pollEvent(game.window, &game.event))
            event_manager(&game);

        sfRenderWindow_clear(game.window, sfBlack);
        game_scene(&game);
        sfRenderWindow_display(game.window);
    }
    destroy_audio(&game);
    destroy_game(&game);
}

int main(int ac, const char **av)
{
    if (ac < 2)
        game_loop(5, tab);
    else
        game_loop(ac, av);
    return 0;
}
