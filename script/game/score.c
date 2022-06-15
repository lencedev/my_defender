/*
** EPITECH PROJECT, 2022
** B-MUL-200-MPL-2-1-mydefender-hippolyte.aubert
** File description:
** score
*/

#include "../../include/game.h"

score_t init_score(int size, sfVector2f position)
{
    score_t score = {0};

    score.text = sfText_create();
    score.font = sfFont_createFromFile("img/among.ttf");
    score.size = size;
    score.score = 0;
    score.boost = 1;
    score.timer = 0;
    sfText_setCharacterSize(score.text, score.size);
    sfText_setString(score.text, "0");
    sfText_setFont(score.text, score.font);
    sfText_setColor(score.text, sfGreen);
    sfText_setPosition(score.text, position);
    return score;
}

void score(game_t *game)
{
    if (!game->init.pause) {
        game->score.timer += game->delta;
        if (game->score.timer > 0.65 / game->score.boost) {
            game->score.score++;
            game->score.timer = 0;
        }
            sfText_setString(game->score.text, my_itoa(game->score.score));
    }
    sfRenderWindow_drawText(game->window, game->score.text, NULL);
}
