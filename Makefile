NAME	=	libft.a
CC		=	gcc
OBJ		=	$(addprefix src/, ft_strlen.c ft_atoi.c ft_tolower.c ft_toupper.c ft_bzero.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_memset.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c)
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
