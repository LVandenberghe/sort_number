##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile my_runner
##

ECHO = /bin/echo -e
DEFAULT = "\033[00m"
BOLD = "\e[1m"
RED = "\e[31m"
GREEN = "\e[32m"
LIGHT_BLUE = "\e[94m"
WHITE = "\e[1;37m"

SRC	=	lib_list/list_create.c	\
		lib_list/list_get.c	\
		lib_list/list_add.c	\
		lib_list/list_remove.c	\
		lib_list/swap_list.c	\
		lib_list/operation_alist.c	\
		lib_list/operation_blist.c	\
		src/my_strlen.c	\
		src/my_putstr.c	\
		src/my_putchar.c	\
		src/my_getnbr.c	\
		src/my_put_nbr.c	\
		src/sort_list.c	\
		src/main.c	\

OBJ	=	$(SRC:.c=.o)

NAME	=	push_swap

CFLAGS	=	-Wall -Wextra  -I includes/
all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ) $(CFLAGS)

	rm -f $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

debug:	CFLAGS += -g
debug:	re

re:	fclean all

tests_run:
		gcc -o unit_test $(SRC) -L . -lmy -lcriterion --coverage
		./unit_test

%.o:	%.c
	@$(CC) -c -o $@ $^ $(CFLAGS) && $(ECHO) -n $(BOLD) $(GREEN)" [OK] " \
	$(WHITE) || $(ECHO) -n $(BOLD) $(RED)" [KO] "$(WHITE) && $(ECHO) \
	$(BOLD) $< | rev | cut -d/ -f 1 | rev && $(ECHO) -n $(DEFAULT)
