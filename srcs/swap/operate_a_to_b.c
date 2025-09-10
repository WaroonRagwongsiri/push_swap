/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operate_a_to_b.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 22:11:08 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/09/10 22:12:02 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	operate_cheapest_a_to_b(int a_count, int b_count, t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*choosen_node;
	int		a_reverse;
	int		b_reverse;

	choosen_node = cheapest_node(stack_a);
	a_reverse = (choosen_node->index > ft_stack_size(*stack_a) / 2);
	b_reverse = (choosen_node->target->index > ft_stack_size(*stack_b) / 2);
	if (a_reverse == b_reverse)
	{
		while (a_count > 0 && b_count > 0)
		{
			if (a_reverse)
				rrr(stack_a, stack_b);
			else
				rr(stack_a, stack_b);
			a_count--;
			b_count--;
		}
	}
	r_a(a_count, a_reverse, stack_a, stack_b);
	r_b(b_count, b_reverse, stack_a, stack_b);
	pb(stack_a, stack_b);
}

void	r_a(int	a_count, int reverse, t_stack **stack_a, t_stack **stack_b)
{
	if (reverse)
	{
		while (a_count-- > 0)
			rra(stack_a, stack_b);
	}
	else
	{
		while (a_count-- > 0)
			ra(stack_a, stack_b);
	}
}

void	r_b(int	b_count, int reverse, t_stack **stack_a, t_stack **stack_b)
{
	if (reverse)
	{
		while (b_count-- > 0)
			rrb(stack_a, stack_b);
	}
	else
	{
		while (b_count-- > 0)
			rb(stack_a, stack_b);
	}
}
