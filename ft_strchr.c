/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rigarrid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 18:05:51 by rigarrid          #+#    #+#             */
/*   Updated: 2022/06/17 18:28:14 by rigarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

size_t	ft_strlen(const char *s)
{
	size_t	con;

	con = 0;
	while (s[con])
		con++;
	return (con);
}

char	*ft_strchr(const char *s, int c)
{
	char	a;
	int		con;
	char	*aux;

	a = c;
	con = 0;
	aux = (char *) s;
	if (c == 0)
		return (aux + ft_strlen(s));
	while (aux[con])
	{
		if (aux[con] == a)
			return (aux + con);
		con++;
	}
	return (0);
}
