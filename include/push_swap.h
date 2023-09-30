/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wdaniel- <wdaniel-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 19:41:10 by wdaniel-          #+#    #+#             */
/*   Updated: 2023/04/24 23:20:17 by wdaniel-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include "../libft/libft.h"

typedef struct s_node
{
	int				index;
	int				nbr;
	struct s_node	*next;
}					t_node;

void	swap_s(t_node **stack, char *flag);
void	add(t_node **header, int new_value);
void	push_s(t_node **src, t_node **dst, char *flag);
void	rotate_s(t_node **stack, char *flag);
void	rotate_rr(t_node **stack, char *flag);
void	ss(t_node **stack_a, t_node **stack_b);
void	rr(t_node **stack_a, t_node **stack_b);
void	rrr(t_node **stack_a, t_node **stack_b);
void	order_two_and_three(t_node **stack_a, int ac);
void	order_four_and_five(t_node **stack_a, t_node **stack_b, int argc);
void	condition(t_node **stack_a, char c);
int		is_sort(t_node *stack);
void	print_stack(t_node *stack);
void	get_index(t_node **stack_a);
int		node_position(t_node **stack_a);
void	radix_b(t_node **stack_a, t_node **stack_b, int index);
void	check_all(int ac, char *av[]);
void	clean(t_node **stack_a);

#endif
