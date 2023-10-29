NAME = libft.a
C_SOURCE = $(wildcard ft_*.c)
BONUS_FILES = $(wildcard ft_*_b.c)
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

bonus: 
	cc $(FLAG) -c $(BONUS_FILES)
	ar rc $(NAME) $(OBJ)
