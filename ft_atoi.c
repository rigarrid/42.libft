
int	ft_atoi(char *a)
{
	int	num;
	int	con;
	int	aux[2];

	num = 0;
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
			aux[1]++;
		}
		else if (a[con] == '+')
			aux[1]++;
		con++;
	}
	while (a[con] >= '0' || a[con] <= '9')
	{
		num = (a[con] - 48) + (num * 10);
		con++;
	}
	if (aux[1] > 1)
		return (0);
	return (num * aux[0]);
}
