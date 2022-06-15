/*
** EPITECH PROJECT, 2022
** B-MUL-200-MPL-2-1-mydefender-hippolyte.aubert
** File description:
** my
*/

#include <SFML/Audio.h>
#include <SFML/Graphics.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdio.h>

#ifndef MY_H_
    #define MY_H_

    #define PLAY 0
    #define HTP 1
    #define QUIT 2
    #define RESUME 3
    #define BACKMENU 4
    #define LEAVE 5
    #define INFO 6
    #define CROSS 7
    #define CROSS_HTP 8

    #define NB_ENEMIES 12

    #define OBITO 0
    #define VENT 1
    #define GUN 2
    #define SNIPER 3

    #define MENU_BG 0
    #define SHOP 1
    #define PAUSE_BG 2
    #define UPGRADE_PRICE 3
    #define MAP 4
    #define BLACK 5
    #define LOOSE 6
    #define HTP_IMG 7

    #define DRAW_S(win, sp) sfRenderWindow_drawSprite(win, sp, NULL);
    #define DRAW_RS(win, rs) sfRenderWindow_drawRectangleShape(win, rs, NULL);

#endif /* !MY_H_ */
