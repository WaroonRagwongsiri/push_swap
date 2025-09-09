/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 11:24:48 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/09/09 17:13:06 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	big_sort(t_stack **stack_a, t_stack **stack_b)
{
	if (ft_stack_size(*stack_a) == 4)
		pb(stack_a, stack_b);
	else
	{
		pb(stack_a, stack_b);
		pb(stack_a, stack_b);
	}
	while (ft_stack_size(*stack_a) > 3)
		cheapest_a_to_b(stack_a, stack_b);
	sort_a_three_asc(stack_a, stack_b);
	b_to_a(stack_a, stack_b);
	if (is_stack_a_sort(stack_a))
		return ;
	sort_a(stack_a);
}

void	cheapest_a_to_b(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*choosen_node;
	int		a_count;
	int		b_count;

	a_to_b_cost(stack_a, stack_b);
	choosen_node = cheapest_node(stack_a);
	if (choosen_node->index > ft_stack_size(*stack_a) / 2)
		a_count = ft_stack_size(*stack_a) - choosen_node->index;
	else
		a_count = choosen_node->index;
	if (choosen_node->target->index > ft_stack_size(*stack_b) / 2)
		b_count = ft_stack_size(*stack_b) - choosen_node->target->index;
	else
		b_count = choosen_node->target->index;
	operate_cheapest_a_to_b(a_count, b_count, stack_a, stack_b);
}

void	operate_cheapest_a_to_b(int a_count, int b_count, t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*choosen_node;

	choosen_node = cheapest_node(stack_a);
	if (choosen_node->index > ft_stack_size(*stack_a) / 2 && a_count != 0)
	{
		while (a_count-- > 0)
			rra(stack_a, stack_b);
	}
	else if (a_count != 0)
	{
		while (a_count-- > 0)
			ra(stack_a, stack_b);
	}
	if (b_count > ft_stack_size(*stack_b) / 2 && b_count != 0)
	{
		while (b_count-- > 0)
			rrb(stack_a, stack_b);
	}
	else if (b_count != 0)
	{
		while (b_count-- > 0)
			rb(stack_a, stack_b);
	}
	pb(stack_a, stack_b);
}

void	b_to_a(t_stack **stack_a, t_stack **stack_b)
{
	(void) stack_a;
	(void) stack_b;
}

void	sort_a(t_stack **stack_a)
{
	(void) stack_a;
}
