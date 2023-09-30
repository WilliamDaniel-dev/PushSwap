/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaniel- <wdaniel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/05 19:45:52 by wdaniel-          #+#    #+#             */
/*   Updated: 2023/04/24 23:22:31 by wdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	main(int ac, char *av[])
{
	int		i;
	t_node	*stack_a;
	t_node	*stack_b;

	if (ac == 1)
		return (0);
	stack_a = NULL;
	stack_b = NULL;
	check_all(ac, av);
	i = 1;
	while (av[i])
		i++;
	while (--i)
		add(&stack_a, ft_atoi(av[i]));
	get_index(&stack_a);
	if (ac == 3 || ac == 4)
		order_two_and_three(&stack_a, ac);
	else if (ac == 5 || ac == 6)
		order_four_and_five(&stack_a, &stack_b, ac);
	else
		radix_b(&stack_a, &stack_b, ac -1);
	clean(&stack_a);
	return (0);
}
