##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## oh bordel
##

SRC	=	main.c			\
		my_strlen.c		\
		my_revstr.c		\
		my_putchar.c		\
		resetstr.c		\
		print_result.c		\
		my_strcmp.c		\
		infinadd.c		\
		alloc.c			\

NAME	= infin_add

OBJ	= $(SRC:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME) $(OBJ)
	rm -f *.o

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

