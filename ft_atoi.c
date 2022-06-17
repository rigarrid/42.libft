/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rigarrid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 11:30:32 by rigarrid          #+#    #+#             */
/*   Updated: 2022/06/17 11:47:09 by rigarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *a)
{
	int	num;
	int	con;
	int	aux;

	num = 0;
	con = 0;
	aux = 1;
	while (a[con] == 32 || (a[con] <= 13 && a[con] > 0))
		con++;
	if (a[con] == '-')
	{
		aux *= -1;
		con++;
	}
	else if (a[con] == '+')
		con++;
	while (a[con] >= '0' && a[con] <= '9')
	{
		num = a[con] - 48 + (num * 10);
		con++;
	}
	return (num * aux);
}
