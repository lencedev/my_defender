/*
** EPITECH PROJECT, 2022
** B-MUL-200-MPL-2-1-mydefender-hippolyte.aubert
** File description:
** event
*/

#include "game.h"

#ifndef EVENT_H_
    #define EVENT_H_

void event_manager(game_t *game);

void menu_key_event(game_t *game);
void menu_mouse_event(game_t *game);

void game_key_event(game_t *game);
void game_mouse_event(game_t *game);

void end_key_event(game_t *game);
void end_mouse_event(game_t *game);


void pause_key_event(game_t *game);
void pause_mouse_event(game_t *game);

#endif /* !EVENT_H_ */
