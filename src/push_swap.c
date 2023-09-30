/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaniel- <wdaniel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 18:15:56 by wdaniel-          #+#    #+#             */
/*   Updated: 2023/04/24 23:22:48 by wdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	add(t_node **stack, int value)
{
	t_node	*new;

	new = malloc(sizeof(t_node));
	if (!new)
		return ;
	new->index = 0;
	new->nbr = value;
	new->next = *stack;
	*stack = new;
}

int	is_sort(t_node *stack)
{
	while (stack->next)
	{
		if (stack->nbr > stack->next->nbr)
			return (0);
		stack = stack->next;
	}
	return (1);
}

void	get_index(t_node **stack_a)
{
	t_node	*aux1;
	t_node	*aux2;

	aux1 = *stack_a;
	aux2 = *stack_a;
	while (aux1)
	{
		while (aux2)
		{
			if (aux1->nbr > aux2->nbr)
				aux1->index++;
			aux2 = aux2->next;
		}
		aux2 = *stack_a;
		aux1 = aux1->next;
	}
}
