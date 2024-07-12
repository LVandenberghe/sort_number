/*
** EPITECH PROJECT, 2022
** B-CPE-110-REN-1-1-pushswap-ludwig.vandenberghe
** File description:
** operation
*/

#include "my.h"
#include "list.h"

void swap_a(list_t *a_list)
{
    swap_list(a_list, 0, 1);
    my_putstr("sa");
}

void rotate_a(list_t *a_list)
{
    first_to_last(a_list, 0);
    my_putstr("ra");
}

void derotate_a(list_t *a_list)
{
    last_to_first(a_list, a_list->size - 1);
    my_putstr("rra");
}

void pass_a_to_b(list_t *a_list, list_t *b_list)
{
    switch_list(a_list, b_list);
    my_putstr("pb");
}
