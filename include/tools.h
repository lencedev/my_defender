/*
** EPITECH PROJECT, 2022
** B-MUL-200-MPL-2-1-mydefender-hippolyte.aubert
** File description:
** tools
*/

#define BUF_SIZE 4000

#include "my.h"

#ifndef TOOLS_H_
    #define TOOLS_H_

typedef struct btn_t {
    sfSprite *sprite;
    sfTexture *texture;
    sfRectangleShape *shape;
    sfIntRect rect;
    sfVector2f size;
    sfVector2f pos;
    sfVector2f b_p;
    sfBool hovered;
} btn_t;

typedef struct btn_settings_t {
    char *filepath;
    sfIntRect rect;
    sfVector2f pos;
    sfVector2f size;
} btn_set_t;

typedef struct bg_t {
    float speed;
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
} bg_t;

typedef struct bg_settings_t {
    char *path;
    int speed;
} bg_set_t;

typedef struct img_settings_t {
    char *path;
    sfVector2f position;
} img_set_t;

typedef struct img_t {
    sfSprite *sprite;
    sfTexture *texture;
    sfVector2f pos;
} img_t;

typedef struct score_t {
    sfText *text;
    sfFont *font;
    int size;
    int score;
    int best_score;
    float boost;
    float timer;
} score_t;

btn_t init_btn(const btn_set_t *btn_set);

int str_length(const char *buf);
int str_line(int line, const char *str);
int line_length(int nb, const char *buf);
char *parse_nb(int nb, const char *av);
char *parse_name(const char *av);
char *open_file(const char *av);
int my_getnbr(const char *str);

#endif /* !TOOLS_H_ */
