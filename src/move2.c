/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move2.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaniel- <wdaniel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/18 19:40:02 by wdaniel-          #+#    #+#             */
/*   Updated: 2023/04/24 23:22:38 by wdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ss(t_node **stack_a, t_node **stack_b)
{
	swap_s(stack_a, NULL);
	swap_s(stack_b, NULL);
}

void	rr(t_node **stack_a, t_node **stack_b)
{
	rotate_s(stack_a, NULL);
	rotate_s(stack_b, NULL);
}

void	rrr(t_node **stack_a, t_node **stack_b)
{
	rotate_rr(stack_a, NULL);
	rotate_rr(stack_b, NULL);
}
