/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rigarrid <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/15 11:30:32 by rigarrid          #+#    #+#             */
/*   Updated: 2022/06/15 11:39:19 by rigarrid         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	num_aux(char *a, int con)
{
	int	num;

	num = 0;
	while (a[con] >= '0' && a[con] <= '9')
	{
		num = a[con] - 48 + (num * 10);
		con++;
	}
	return (num);
}

int	ft_atoi(char *a)
{
	int	num;
	int	con;
	int	aux[2];

	con = 0;
	aux[0] = 1;
	aux[1] = 0;
	while (a[con] == 32 || (a[con] <= 11 && a[con] > 0))
		con++;
	while (a[con] == '+' || a[con] == '-')
	{
		if (a[con] == '-')
		{
			aux[0] *= -1;
			aux[1] += 1;
		}
		else if (a[con] == '+')
			aux[1] += 1;
		if (aux[1] > 1)
			return (0);
		con++;
	}
	num = num_aux(a, con);
	return (num * aux[0]);
}
