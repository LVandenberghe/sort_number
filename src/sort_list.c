/*
** EPITECH PROJECT, 2022
** B-CPE-110-REN-1-1-pushswap-ludwig.vandenberghe
** File description:
** sort_list
*/

#include "my.h"

int find_smallest(list_t *alist)
{
    int index = 0;
    int tempo;
    list_node_t *node;

    node = alist->head;
    tempo = alist->head->value;
    for (int i = 0; node != NULL; i++) {
        if (tempo > node->value) {
            tempo = node->value;
            index = i;
        }
        node = node->next;
    }
    return (index);
}

void operate_long_move(list_t *alist, unsigned int index)
{
    for (unsigned int i = 0; i != index; i++) {
        rotate_a(alist);
        write(1, " ", 1);
    }
}

int second_switch(list_t *alist, list_t *blist, unsigned int index)
{
    if (alist->size == 1 || index == 0) {
        pass_a_to_b(alist, blist);
        write(1, " ", 1);
        return (0);
    }
    if (index == 1) {
        swap_a(alist);
        write(1, " ", 1);
        pass_a_to_b(alist, blist);
        write(1, " ", 1);
        return (0);
    }
    return (0);
}

int switch_smallest(list_t *alist, list_t *blist)
{
    unsigned int index = find_smallest(alist);
    unsigned int lenght = alist->size - index;

    if (alist->size == 1 || index == 0 || index == 1) {
        second_switch(alist, blist, index);
        return (0);
    }
    if (index >= lenght) {
        for (;index != alist->size; index++) {
            derotate_a(alist);
            write(1, " ", 1);
        }
    } else {
        operate_long_move(alist, index);
    }
    pass_a_to_b(alist, blist);
    write(1, " ", 1);
    return (0);
}

void sort(list_t *alist, list_t *blist)
{
    unsigned int size = alist->size;

    for (unsigned int i = 0; i != size; i++)
        switch_smallest(alist, blist);
    for (unsigned int j = 0; j != size - 1; j++) {
        write(1, "pa ", 3);
    }
    write(1, "pa\n", 3);
}
