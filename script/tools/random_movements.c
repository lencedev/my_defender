/*
** EPITECH PROJECT, 2022
** B-MUL-200-MPL-2-1-mydefender-hippolyte.aubert
** File description:
** random_movements
*/

#include "../../include/my.h"

float random_movement(void)
{
    srand( time( NULL ) );

    float random_number;
    random_number = ((float)(rand()%20)-10);
    return random_number;
}
