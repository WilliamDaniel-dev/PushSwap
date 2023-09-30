/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaniel- <wdaniel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 14:01:38 by wdaniel-          #+#    #+#             */
/*   Updated: 2023/04/24 23:22:55 by wdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	node_position(t_node **stack_a)
{
	t_node	*ax1;
	t_node	*ax2;
	int		i;

	i = 0;
	ax1 = *stack_a;
	ax2 = *stack_a;
	while (ax1)
	{
		if (ax1->index < ax2->index)
			ax2 = ax1;
		ax1 = ax1->next;
	}
	ax1 = *stack_a;
	while (ax1)
	{
		if (ax1->index == ax2->index)
			break ;
		i++;
		ax1 = ax1->next;
	}
	return (i);
}

void	condition(t_node **stack_a, char c)
{
	if (c == 'a')
	{
		rotate_rr(stack_a, "rra\n");
		swap_s(stack_a, "sa\n");
	}
	else
	{
		rotate_s(stack_a, "ra\n");
		swap_s(stack_a, "sa\n");
	}
}

void	clean(t_node **stack_a)
{
	t_node	*ax;

	while (*stack_a)
	{
		ax = (*stack_a)->next;
		free(*stack_a);
		*stack_a = ax;
	}
}
