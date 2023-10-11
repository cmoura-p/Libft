NAME = libft.a
C_SOURCE = $(wildcard ft_*.c)
OBJ = $(C_SOURCE:.c=.o)
FLAG = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	cc $(FLAG) -c $(C_SOURCE)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	@rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all