NAME = libft.a
FLAGS = -Wall -Wextra -Werror
FUNCTIONS = ft_strmapi.c ft_itoa.c ft_split.c ft_strtrim.c ft_strjoin.c ft_substr.c ft_strdup.c ft_calloc.c ft_strnstr.c ft_memcmp.c ft_memchr.c ft_strncmp.c ft_strrchr.c ft_strchr.c ft_tolower.c ft_toupper.c ft_strlcat.c ft_strlcpy.c ft_memmove.c ft_memcpy.c ft_atoi.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_bzero.c ft_isalpha.c ft_isdigit.c ft_memset.c
OBJECTS = ft_strmapi.o ft_itoa.o ft_split.o ft_strtrim.o ft_strjoin.o ft_substr.o ft_strdup.o ft_calloc.o ft_strnstr.o ft_memcmp.o ft_memchr.o ft_strncmp.o ft_strrchr.o ft_strchr.o ft_tolower.o ft_toupper.o ft_strlcat.o ft_strlcpy.o ft_memmove.o ft_memcpy.o ft_atoi.o ft_isalnum.o ft_isascii.o ft_isprint.o ft_strlen.o ft_bzero.o ft_isalpha.o ft_isdigit.o ft_memset.o

all: $(NAME)

$(NAME):
	@gcc $(FLAGS) -c $(FUNCTIONS)
	@ar -rsv $(NAME) $(OBJECTS)

clean:
	@rm -f $(OBJECTS)

fclean: clean
	@rm -f $(NAME)

re: fclean all
