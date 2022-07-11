/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rigarrid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 15:30:13 by rigarrid          #+#    #+#             */
/*   Updated: 2022/07/08 16:04:05 by rigarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int	cont;

	if (lst == NULL)
		return (0);
	cont = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		cont++;
	}
	return (cont);
}
