/*
** EPITECH PROJECT, 2022
** B-MUL-200-MPL-2-1-mydefender-hippolyte.aubert
** File description:
** game
*/

#ifndef GAME_H_
    #define GAME_H_

    #include "my.h"
    #include "tools.h"
    #include "audio.h"
    #include "shop.h"
    #include "enemies.h"
    #include "weapons.h"

typedef struct init_t {
    sfBool menu;
    sfBool htp;
    sfBool option;
    sfBool game;
    sfBool shop;
    sfBool placing;
    sfBool pause;
    sfBool end;
} init_t;

typedef struct base_t {
    int hp;
    btn_t btn;
} base_t;

typedef struct game_t {
    sfEvent event;
    sfRenderWindow *window;
    sfClock *delta_clock;
    float delta;
    score_t score;
    score_t end;
    bg_t *bg;
    btn_t *btn;
    img_t *img;
    shop_t *shop;
    list_music_t musics;
    sfVector2f mp;
    init_t init;
    golds_t golds;
    enemies_t *enemies;
    weapon_t *weapon;
    placement_t *outside;
    placement_t *inside;
    base_t base;
    float speed;
} game_t;

void display_menu(game_t *game);
void display_bg(game_t *game);
void display_game(game_t *game);
void display_end(game_t *game);
void display_pause(game_t *game);
void display_shop(game_t *game);

void game_loop(int ac, const char **av);
void display_bg(game_t *game);
char *my_itoa(int nb);
void draw_buttons_animation(game_t *game, btn_t *btn);
void draw_buttons(game_t *game, btn_t *btn);
void animate_btn(game_t *game, btn_t *btn);
void golds_init(game_t *game);
int hover_inside(game_t *game, int i);
int hover_outside(game_t *game, int i);
void delta_time(game_t *game, sfTime delta_time);
void destroy_audio(game_t *game);
void theme_music(sfMusic *music);
void display_prices(game_t *game, int i);
void display_weapon(game_t *game);
int hover_buttons(game_t *game, btn_t *btn);

void obito_collision(hitbox_t *hitbox, enemies_t *enemies);
void vent_collision(hitbox_t *hitbox, enemies_t *enemies);
void gun_collision(hitbox_t *hitbox, enemies_t *enemies);
void sniper_collision(hitbox_t *hitbox, enemies_t *enemies);

void obito_animation(game_t *game);
void vent_animation(game_t *game);
void gun_animation(game_t *game);
void sniper_animation(game_t *game);

void clock_animation_obito(float delta_time, enemies_t *enemies);
void clock_animation_vent(float delta_time, enemies_t *enemies);
void clock_animation_gun(float delta_time, enemies_t *enemies);
void clock_animation_sniper(float delta_time, enemies_t *enemies);

void clock_move_enemies(float delta_time, enemies_t *enemies);
void clock_animation_enemies(float delta_time, enemies_t *enemies);
void move_enemies(game_t *game);

float random_movement(void);
void move_1(float delta_time, enemies_t *enemies);
void move_2(float delta_time, enemies_t *enemies);
void move_3(float delta_time, enemies_t *enemies);
void move_4(float delta_time, enemies_t *enemies);
void move_5(float delta_time, enemies_t *enemies);

void display_base(game_t *game);
void reset_enemies(enemies_t *enemies);
void score(game_t *game);

void destroy_game(game_t *game);

game_t init_game(int, char const **);
bg_t *init_bg_tab(void);
img_t *init_img_tab(void);
btn_t *init_btn_tab(void);
btn_t *init_shop_btn_tab(void);
golds_t init_golds(int size, sfVector2f position);
shop_t *init_shop_tab(void);
enemies_t init_enemies(const enemies_set_t set);
enemies_t *init_enemies_tab(void);
weapon_t init_weapon(weapon_set_t set);
weapon_t *init_weapon_tab(int, const char **);
btn_t init_btn(const btn_set_t *btn_set);
placement_t *init_placements_outside(void);
placement_t *init_placements_inside(void);
list_music_t init_music_list(void);
base_t init_base(void);
score_t init_score(int size, sfVector2f position);

sfRenderWindow *init_window(unsigned int w, unsigned int h, char *title);

#endif /* !GAME_H_ */
