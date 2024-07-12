/*
** EPITECH PROJECT, 2022
** B-CPE-110-REN-1-1-pushswap-ludwig.vandenberghe
** File description:
** operation_blist
*/

#include "my.h"
#include "list.h"

void swap_b(list_t *b_list)
{
    swap_list(b_list, 0, 1);
    my_putstr("sb");
}

void rotate_b(list_t *b_list)
{
    first_to_last(b_list, 0);
    my_putstr("rb");
}

void derotate_b(list_t *b_list)
{
    last_to_first(b_list, b_list->size - 1);
    my_putstr("rrb");
}

void pass_b_to_a(list_t *b_list, list_t *a_list)
{
    switch_list(b_list, a_list);
    my_putstr("pa");
}
