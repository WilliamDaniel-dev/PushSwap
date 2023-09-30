/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaniel- <wdaniel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/17 04:56:06 by wdaniel-          #+#    #+#             */
/*   Updated: 2023/03/14 18:16:58 by wdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*ft_atoi the mimics a atoi the original converts the initial portion 
of the string pointed to by nptr to int*/
int	ft_atoi(const char *nptr)
{
	int	result;
	int	sign;
	int	i;

	i = 0;
	sign = 1;
	while (nptr[i] == 32)
	i++;
	if (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			sign = -1;
		i++;
	}
	result = 0;
	while (ft_isdigit(nptr[i]))
	{
		result = result * 10 + nptr[i] - 48;
		i++;
	}
	return (result * sign);
}

/*int		main()
{
	char	*nptr;
	int		retur;

	nptr = "5";

	retur = ft_atoi(nptr);

	printf("Segue tudo iss: %d\n", retur);

	return (0);
}*/