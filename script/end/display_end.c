/*
** EPITECH PROJECT, 2022
** B-MUL-200-MPL-2-1-mydefender-hippolyte.aubert
** File description:
** display_end
*/

#include "../../include/game.h"

void end_score(game_t *game)
{
    sfText_setString(game->end.text, my_itoa(game->score.score));
    sfText_setColor(game->end.text, sfWhite);
    sfRenderWindow_drawText(game->window, game->end.text, NULL);
}

void display_end(game_t *game)
{
    DRAW_S(game->window, game->img[LOOSE].sprite);
    end_score(game);
}
