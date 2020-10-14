NAME	=	libft.a
CC		=	gcc
OBJ		=	$(addprefix src/, ft_strlen.c ft_atoi.c ft_tolower.c ft_toupper.c)
BONUS	=	$(addprefix bonus/, )
COMP 	=	$(OBJ:.c=.o)
COMP_BONUS	=	$(BONUS:.c=.o)
CFLAGS	=	-Wall -Wextra -Werror
HEADERS	=	includes

all: $(NAME)

$(NAME): $(COMP)
	ar rc $(NAME) $(COMP)

bonus: $(COMP) $(COMP_BONUS)
	ar rc $(NAME) $(COMP) $(COMP_BONUS)

%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@ -I $(HEADERS)

clean:
	rm -f $(COMP) $(COMP_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re test
