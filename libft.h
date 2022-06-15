#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>

int		ft_atoi(char *a);
int		ft_isalnum(int num);
int 	ft_isascii(int c);
int		ft_isdigit(int num);
int		ft_isprint(int c);
int		ft_isalpha(int n);
void	*ft_memset(void *str, int c, size_t len);
void	ft_bzero(void *s, size_t n);
size_t	ft_strlen(const char *s);

#endif
