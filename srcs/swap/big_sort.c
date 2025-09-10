/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 10:13:13 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/09/10 22:11:59 by waroonwork@      ###   ########.fr       */
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
		if ((*stack_b)->val < (*stack_b)->next->val)
			sb(stack_a, stack_b);
	}
	while (ft_stack_size(*stack_a) > 0)
		cheapest_a_to_b(stack_a, stack_b);
	while (ft_stack_size(*stack_b) > 0)
		pa(stack_a, stack_b);
	if (is_stack_a_sort(stack_a))
		return ;
	sort_a(stack_a, stack_b);
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

void	b_to_clossest_bigger_a(t_stack **stack_a, t_stack **stack_b)
{
	while (ft_stack_size(*stack_b) > 0)
	{
		set_target_b_to_a(stack_a, *stack_b);
		target_a_to_top(*stack_b, stack_a, stack_b);
		pa(stack_a, stack_b);
	}
}

void	sort_a(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*min;
	int		op_count;

	min = get_min(stack_a);
	op_count = 0;
	if (min->index > ft_stack_size(*stack_a) / 2)
	{
		op_count += ft_stack_size(*stack_a) - min->index;
		while (op_count-- > 0)
			rra(stack_a, stack_b);
	}
	else
	{
		op_count += min->index;
		while (op_count-- > 0)
			ra(stack_a, stack_b);
	}
}
