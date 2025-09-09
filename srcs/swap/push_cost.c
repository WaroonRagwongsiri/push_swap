/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_cost.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 21:03:38 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/09/09 16:42:20 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	a_to_b_cost(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*cur;
	int		push_cost;

	if (!stack_a || !stack_b)
		return ;
	cur = *stack_a;
	while (cur)
	{
		push_cost = 0;
		if (cur->index > ft_stack_size(*stack_a))
			push_cost += ft_stack_size(*stack_a) - cur->index;
		else
			push_cost += cur->index;
		push_cost += cost_closest_smaller(cur, stack_b);
		cur->push_cost = push_cost;
		cur = cur->next;
	}
}

int	cost_closest_smaller(t_stack *node_stack_a, t_stack **stack_b)
{
	t_stack	*max;
	t_stack	*target;
	t_stack	*cur;

	target = NULL;
	max = NULL;
	cur = *stack_b;
	while (cur)
	{
		if (!target || !max)
		{
			max = cur;
			target = cur;
		}
		if (cur->val >= target-> val && cur->val <= node_stack_a->val)
			target = cur;
		if (cur->val > max->val)
			max = cur;
		cur = cur->next;
	}
	if (target->val > node_stack_a->val)
		target = max;
	node_stack_a->target = target;
	if (target->index > ft_stack_size(*stack_b) / 2)
		return (ft_stack_size(*stack_b) - target->index);
	return (target->index);
}

t_stack	*cheapest_node(t_stack **stack_a)
{
	int		cheapest_cost;
	t_stack	*cheapest_node;
	t_stack	*cur;

	cheapest_cost = 0;
	cheapest_node = NULL;
	cur	= *stack_a;
	while (cur)
	{
		if (cur->push_cost < cheapest_cost)
			cheapest_node = cur;
		cur = cur->next;
	}
	return (cheapest_node);
}
