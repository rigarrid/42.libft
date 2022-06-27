/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rigarrid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/27 11:06:06 by rigarrid          #+#    #+#             */
/*   Updated: 2022/06/27 11:19:23 by rigarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	con;

	con = 0;
	while ((char *)s && con < n)
	{
		if (((char *)s)[con] == (char )c)
			return ((void *)s + con);
		con++;
	}
	return (NULL);
}
