/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_all.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaniel- <wdaniel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 21:01:53 by wdaniel-          #+#    #+#             */
/*   Updated: 2023/05/21 16:51:24 by wdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	error(void)
{
	write(1, "Error\n", 7);
	exit(1);
}

static long long	atoi_long(const char *nbr)
{
	int				sign;
	long long		result;

	sign = 1;
	while ((*nbr >= 9 && *nbr <= 13) || *nbr == 32)
		nbr++;
	if (*nbr == '-' || *nbr == '+')
	{
		if (*nbr == '-')
			sign = -1;
		nbr++;
	}
	result = 0;
	while (*nbr >= 48 && *nbr <= 57)
	{
		result = result * 10 + (*nbr - 48);
		nbr++;
	}
	return (result * sign);
}

static void	duplicate(int ac, char *av[])
{
	int	i;
	int	j;

	i = 0;
	while (++i < ac)
	{
		j = i;
		while (++j < ac)
			if (ft_atoi(av[i]) == ft_atoi(av[j]))
				error();
	}
}

void	check_all(int ac, char *av[])
{
	int			i;
	int			j;
	long long	nbr;

	i = 0;
	while (++i < ac)
	{
		nbr = atoi_long(av[i]);
		if (nbr > 2147483647 || nbr < -2147483648)
			error();
		j = -1;
		if ((av[i][0] == '-' || av[i][0] == '+'))
		{
			if (!av[i][1])
				error();
			j++;
		}
		while (av[i][++j])
			if (av[i][j] < 48 || av[i][j] > 57)
				error();
	}
	duplicate(ac, av);
}
