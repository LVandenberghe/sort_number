/*
** EPITECH PROJECT, 2022
** my_putstr
** File description:
** task 2 day 4
*/

#include "my.h"

int my_putstr(char const *str)
{
    write(1, str, my_strlen(str));
    return (0);
}
