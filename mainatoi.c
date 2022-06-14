#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(char *a);

int main(int argc, char **argv)
{
	if (argc > 2 || argc < 2)
	{
		printf("Enter only one parameter please\n");
		return (0);
	}

	printf("\nentered string: |%s|\n", argv[1]);
    printf("My function: %d\n", ft_atoi(argv[1]));
    printf("Original function: %d\n\n", atoi(argv[1]));
}