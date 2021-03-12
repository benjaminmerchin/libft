NAME	=	libft.a
CC		=	gcc
OBJ		=	ft_strlen.c ft_atoi.c ft_tolower.c ft_toupper.c ft_bzero.c ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_memset.c ft_memcpy.c ft_memccpy.c ft_memmove.c ft_memchr.c ft_memcmp.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
BONUS	=	ft_lstadd_front.c ft_lstdelone.c ft_lstlast.c ft_lstnew.c ft_lstadd_back.c ft_lstclear.c ft_lstiter.c ft_lstmap.c ft_lstsize.c
EXTRA	=	ft_putchar.c ft_putstr.c ft_putnbr.c
COMP 	=	$(OBJ:.c=.o)
COMP_BONUS	=	$(BONUS:.c=.o)
COMP_EXTRA	=	$(EXTRA:.c=.o)
CFLAGS	=	-Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(COMP)
	ar rc $(NAME) $(COMP)

bonus: $(COMP) $(COMP_BONUS) $(COMP_EXTRA)
	ar rc $(NAME) $(COMP) $(COMP_BONUS) $(COMP_EXTRA)

%.o: %.c
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	rm -f $(COMP) $(COMP_BONUS) $(COMP_EXTRA)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean fclean all re test
