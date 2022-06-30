/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rigarrid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/30 18:22:19 by rigarrid          #+#    #+#             */
/*   Updated: 2022/06/30 18:38:28 by rigarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	con;

	if (!(str = ft_strdup(s)))
		return (NULL);
	con = 0;
	while (str[con])
	{
		str[con] = (*f)(con, str[con]);
		con++;
	}
	return (str);
}
