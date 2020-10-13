NAME	=	libft.a
CC		=	gcc
OBJ		=	src/*.c
BONUS	=	bonus/*.c
COMP 	=	$(OBJ:.c=.o) $(BONUS:.c=.o)
CFLAGS	=	-Wall -Wextra -Werror
HEADERS	=	libft.h

all: $(NAME)

$(NAME) : $(HEADERS) $(COMP)
	ar rc $(NAME) $(COMP)

$(NAME) : $(HEADERS) $(COMP) 
	ar rc $(NAME) $(COMP)

clean:
	rm -f $(COMP)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re
