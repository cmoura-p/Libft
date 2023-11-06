NAME = libft.a
FLAG = -Wall -Wextra -Werror

C_SOURCE = ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c \
 ft_isdigit.c ft_isprint.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
 ft_memset.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
 ft_split.c ft_substr.c ft_tolower.c ft_toupper.c ft_strchr.c ft_strrchr.c \
 ft_strdup.c ft_strlen.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strtrim.c \
 ft_striteri.c ft_strmapi.c ft_itoa.c ft_strnstr.c ft_strncmp.c
OBJ = $(C_SOURCE:.c=.o)

BONUS_FILES = ft_lstnew_b.c ft_lstsize_b.c ft_lstlast_b.c ft_lstdelone_b.c ft_lstclear_b.c \
ft_lstadd_back_b.c ft_lstadd_front_b.c ft_lstiter_b.c ft_lstmap_b.c

BONUS_OBJ = $(BONUS_FILES:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

$(OBJ): $(C_SOURCE)
	cc $(FLAG) -c $(C_SOURCE)

clean:
	@rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: 
	cc $(FLAG) -c $(BONUS_FILES)
	ar rc $(NAME) $(BONUS_OBJ)
