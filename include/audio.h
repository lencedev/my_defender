/*
** EPITECH PROJECT, 2022
** B-MUL-200-MPL-2-1-mydefender-hippolyte.aubert
** File description:
** audio
*/


#ifndef AUDIO_H_
    #define AUDIO_H_

    #include "my.h"

typedef struct music_t {
    sfMusic *music;
    char *title;
} music_t;

typedef struct list_music_t {
    music_t theme;
    music_t task;
    music_t ratio;
} list_music_t;

#endif /* !AUDIO_H_ */
