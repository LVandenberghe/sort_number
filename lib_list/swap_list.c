/*
** EPITECH PROJECT, 2022
** B-CPE-110-REN-1-1-pushswap-ludwig.vandenberghe
** File description:
** swap_list
*/

#include "list.h"
#include "my.h"

void swap_list(list_t *list, int index1, int index2)
{
    list_node_t *node1 = list->head;
    list_node_t *node2 = list->head;
    int tempo;

    for (int i = 0; i != index1; i++)
        node1 = node1->next;
    for (int j = 0; j != index2; j++)
        node2 = node2->next;
    tempo = node2->value;
    node2->value = node1->value;
    node1->value = tempo;
}

void first_to_last(list_t *list, int index1)
{
    list_node_t *node1 = list->head;

    for (int i = 0; i != index1; i++)
        node1 = node1->next;
    list_add(list, node1->value);
    list_remove(list, 0);
}

void last_to_first(list_t *list, int index1)
{
    list_node_t *node1 = list->head;
    int size;

    for (int i = 0; i != index1; i++) {
        node1 = node1->next;
    }
    size = list->size;
    for (int j = 0; j != size - 1; j++) {
        list_add(list, list->head->value);
        list->head = list->head->next;
    }
    list->size = size;
}

void switch_list(list_t *alist, list_t *blist)
{
    list_node_t *node = alist->head;
    int tempo;

    for (unsigned int i = 0; i != alist->size - 1; i++) {
        node = node->next;
    }
    tempo = alist->head->value;
    list_add(blist, tempo);
    list_remove(alist, 0);
    last_to_first(blist, blist->size - 1);
}
