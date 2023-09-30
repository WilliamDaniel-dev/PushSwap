/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   orden.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaniel- <wdaniel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 21:32:43 by wdaniel-          #+#    #+#             */
/*   Updated: 2023/04/24 23:22:44 by wdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

static void	moviments_four(t_node **stack_a, t_node **stack_b, int i)
{
	if (i == 0)
		push_s(stack_a, stack_b, "pb\n");
	else if (i == 1)
	{
		swap_s(stack_a, "sa\n");
		push_s(stack_a, stack_b, "pb\n");
	}
	else if (i == 2)
	{
		rotate_rr(stack_a, "rra\n");
		rotate_rr(stack_a, "rra\n");
		push_s(stack_a, stack_b, "pb\n");
	}
	else if (i == 3)
	{
		rotate_rr(stack_a, "rra\n");
		push_s(stack_a, stack_b, "pb\n");
	}
}

static void	moviments_five(t_node **stack_a, t_node **stack_b, int i)
{
	if (i == 0)
		push_s(stack_a, stack_b, "pb\n");
	else if (i == 1)
	{
		swap_s(stack_a, "sa\n");
		push_s(stack_a, stack_b, "pb\n");
	}
	else if (i == 2)
	{
		rotate_s(stack_a, "ra\n");
		rotate_s(stack_a, "ra\n");
		push_s(stack_a, stack_b, "pb\n");
	}
	else if (i == 3)
	{
		rotate_rr(stack_a, "rra\n");
		rotate_rr(stack_a, "rra\n");
		push_s(stack_a, stack_b, "pb\n");
	}
	else if (i == 4)
	{
		rotate_rr(stack_a, "rra\n");
		push_s(stack_a, stack_b, "pb\n");
	}
}

void	order_two_and_three(t_node **stack_a, int ac)
{
	t_node	*first;
	t_node	*mid;
	t_node	*last;

	first = *stack_a;
	mid = first->next;
	last = mid->next;
	if (is_sort(*stack_a) == 1)
		return ;
	if (ac == 3)
		swap_s(stack_a, "sa\n");
	else if (last->nbr > first->nbr && mid->nbr > last->nbr)
		condition(stack_a, 'a');
	else if (first->nbr > mid->nbr && mid->nbr > last->nbr)
		condition(stack_a, 'b');
	else if (first->nbr > mid->nbr && first->nbr > last->nbr)
		rotate_s(stack_a, "ra\n");
	else if (first->nbr > mid->nbr && first->nbr < last->nbr)
		swap_s(stack_a, "sa\n");
	else
		rotate_rr(stack_a, "rra\n");
}

void	order_four_and_five(t_node **stack_a, t_node **stack_b, int argc)
{
	if (is_sort(*stack_a) == 1)
		return ;
	if (argc == 5)
	{
		moviments_four(stack_a, stack_b, node_position(stack_a));
		order_two_and_three(stack_a, 4);
		push_s(stack_b, stack_a, "pa\n");
	}
	else
	{
		moviments_five(stack_a, stack_b, node_position(stack_a));
		moviments_four(stack_a, stack_b, node_position(stack_a));
		order_two_and_three(stack_a, 5);
		push_s(stack_b, stack_a, "pa\n");
		push_s(stack_b, stack_a, "pa\n");
	}
}
