/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rigarrid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 11:47:51 by rigarrid          #+#    #+#             */
/*   Updated: 2022/06/17 13:21:58 by rigarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stddef.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	con;

	con = 0;
	while (*((unsigned char *)dst + con) && con < n)
	{
		*((unsigned char *)dst + con) = *((unsigned char *)src + con);
		con++;
	}
	return ((char *)dst);
}
