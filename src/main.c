/*
** EPITECH PROJECT, 2022
** B-MUL-100-REN-1-1-myhunter-ludwig.vandenberghe
** File description:
** main
*/

#include "my.h"

int main(int ac, char **av)
{
    list_t *alist = list_create();
    list_t *blist = list_create();

    if (ac == 1 || ac == 2) {
        write(1, "\n", 1);
        return (0);
    }
    for (int i = 1; av[i] != NULL; i++) {
        list_add(alist, my_getnbr(av[i]));
    }
    sort(alist, blist);
    return (0);
}
