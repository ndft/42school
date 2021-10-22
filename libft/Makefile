NAME = libft.a

SRC = ft_memset.c ft_bzero.c ft_memmove.c \
ft_memchr.c ft_memcmp.c ft_strlen.c \
ft_strchr.c ft_strrchr.c ft_isalpha.c ft_isdigit.c \
ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c

OBJ = $(SRC:.c=.o)

HEADER = libft.h

$(NAME):
	@gcc -Wall -Wextra -Werror -c $(SRC) 
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

all: $(NAME)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all

