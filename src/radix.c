/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaniel- <wdaniel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 23:02:19 by wdaniel-          #+#    #+#             */
/*   Updated: 2023/04/24 23:22:51 by wdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static int	size_binary(int upper)
{
	int	i;

	i = 0;
	while (1)
	{
		if (!(upper >> i))
			break ;
		i++;
	}
	return (i);
}

static int	upper_value(t_node **stack_a)
{
	t_node	*beg;
	int		upper;

	upper = -1;
	beg = *stack_a;
	while (beg)
	{
		if (beg->index > upper)
			upper = beg->index;
		beg = beg->next;
	}
	return (upper);
}

void	radix_b(t_node **stack_a, t_node **stack_b, int i_max)
{
	int	i;
	int	bit;
	int	upper_binary;

	if (is_sort(*stack_a) == 1)
		return ;
	bit = 0;
	upper_binary = size_binary(upper_value(stack_a));
	while (bit < upper_binary)
	{
		i = 0;
		while (i < i_max)
		{
			if (((*stack_a)->index >> bit) & 1)
				rotate_s(stack_a, "ra\n");
			else
				push_s(stack_a, stack_b, "pb\n");
			i++;
		}
		while (*stack_b)
			push_s(stack_b, stack_a, "pa\n");
		bit++;
	}
}
