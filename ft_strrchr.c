/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rigarrid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/17 18:32:27 by rigarrid          #+#    #+#             */
/*   Updated: 2022/06/17 18:52:26 by rigarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	while (*s)
		s++;
	while (*s - 1)
	{
		if (*s == (char )c)
			return ((char *)s);
		s--;
	}
	return (0);
}
