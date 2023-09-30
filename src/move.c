/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaniel- <wdaniel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 16:31:00 by wdaniel-          #+#    #+#             */
/*   Updated: 2023/04/24 23:22:35 by wdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	swap_s(t_node **stack, char *flag)
{
	t_node	*ax1;
	t_node	*ax2;

	ax1 = *stack;
	ax2 = ax1->next;
	*stack = ax2;
	ax1->next = ax2->next;
	ax2->next = ax1;
	write(1, flag, 3);
}

void	push_s(t_node **src, t_node **dst, char *flag)
{
	t_node	*aux;

	aux = *src;
	*src = aux->next;
	if ((*dst) == NULL)
	{
		aux->next = *dst;
		*dst = aux;
	}
	else
	{
		aux->next = *dst;
		*dst = aux;
	}
	write(1, flag, 3);
}

void	rotate_s(t_node **stack, char *flag)
{
	t_node	*aux1;
	t_node	*aux2;

	if (*stack == NULL || (*stack)->next == NULL)
		return ;
	aux1 = *stack;
	aux2 = *stack;
	*stack = aux1->next;
	while (aux1->next)
		aux1 = aux1->next;
	aux1->next = aux2;
	aux2->next = NULL;
	if (flag)
		write(1, flag, 3);
}

void	rotate_rr(t_node **stack, char *flag)
{
	t_node	*ax1;
	t_node	*ax2;

	ax1 = *stack;
	ax2 = *stack;
	while (ax1->next->next)
		ax1 = ax1->next;
	ax2 = ax1->next;
	ax1->next = NULL;
	ax2->next = *stack;
	*stack = ax2;
	write(1, flag, 4);
}
