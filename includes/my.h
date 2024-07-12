/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** for functions
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "list.h"

#ifndef MY_H_
    #define MY_H_

    void my_putchar(char c);
    int my_putstr(char const *str);
    int my_strlen(char const *str);
    int my_put_nbr(int nb);
    int my_getnbr(char const *str);
    int find_smallest(list_t *alist);
    int switch_smallest(list_t *alist, list_t *blist);
    void sort(list_t *alist, list_t *blist);
#endif /* !MY_H_ */
