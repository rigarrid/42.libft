/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rigarrid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/28 12:46:30 by rigarrid          #+#    #+#             */
/*   Updated: 2022/06/30 16:22:22 by rigarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*result;
	unsigned int	c;

	if (start > ft_strlen(s))
		return (ft_strdup(""));
	result = malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	c = 0;
	while (c < len)
	{
		result[c] = s[c + start];
		c++;
	}
	result[c] = 0;
	return (result);
}
