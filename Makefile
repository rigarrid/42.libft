NAME = libft
FLAGS = -Wall -Wextra -Werror
FUNCTIONS = ft_atoi.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_bzero.c ft_isalpha.c ft_isdigit.c ft_memset.c
OBJECTS =  ft_atoi.o ft_isalnum.o ft_isascii.o ft_isprint.o ft_strlen.o ft_bzero.o ft_isalpha.o ft_isdigit.o ft_memset.o

all: $(NAME)

$(NAME):
	@gcc $(NAME) $(FLAGS) -c $(FUNCTIONS)
	@ar -rsv $(NAME).a $(OBJECTS) 
