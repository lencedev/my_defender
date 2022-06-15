/*
** EPITECH PROJECT, 2022
** B-MUL-200-MPL-2-1-mydefender-hippolyte.aubert
** File description:
** audio
*/

#include "../../include/game.h"

void theme_music(sfMusic *music)
{
    sfMusic_setLoop(music, sfTrue);
    sfMusic_play(music);
}

music_t init_music(char *title)
{
    music_t music = {0};

    music.music = sfMusic_createFromFile(title);
    return music;
}

list_music_t init_music_list(void)
{
    list_music_t list_music = {0};

    list_music.theme = init_music("music/theme.wav");
    list_music.task = init_music("music/task.wav");
    list_music.ratio = init_music("music/ratio.wav");
    return list_music;
}

void destroy_audio(game_t *game)
{
    sfMusic_destroy(game->musics.theme.music);
    sfMusic_destroy(game->musics.task.music);
    sfMusic_destroy(game->musics.ratio.music);
}
