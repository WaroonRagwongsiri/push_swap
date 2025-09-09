/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_cost.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 21:03:38 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/09/09 21:20:14 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	a_to_b_cost(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*cur;
	int		push_cost;
	int		stack_a_size;

	if (!stack_a || !stack_b || !*stack_a)
		return ;
	stack_a_size = ft_stack_size(*stack_a);
	cur = *stack_a;
	while (cur)
	{
		push_cost = 0;
		if (cur->index > stack_a_size / 2)
			push_cost += stack_a_size - cur->index;
		else
			push_cost += cur->index;
		push_cost += cost_closest_smaller(cur, stack_b);
		cur->push_cost = push_cost;
		cur = cur->next;
	}
}

int	cost_closest_smaller(t_stack *node_stack_a, t_stack **stack_b)
{
	t_stack	*cur;
	t_stack	*target;
	t_stack	*max;

	cur = *stack_b;
	target = NULL;
	max = *stack_b;
	while (cur)
	{
		if (cur->val > max->val)
			max = cur;
		if (cur->val < node_stack_a->val)
		{
			if (target == NULL || cur->val > target->val)
				target = cur;
		}
		cur = cur->next;
	}
	if (target == NULL)
		target = max;
	node_stack_a->target = target;
	if (target->index > ft_stack_size(*stack_b) / 2)
		return (ft_stack_size(*stack_b) - target->index);
	return (target->index);
}

t_stack	*cheapest_node(t_stack **stack_a)
{
	t_stack	*cheapest_node;
	t_stack	*cur;

	cheapest_node = *stack_a;
	cur	= *stack_a;
	while (cur)
	{
		if (cur->push_cost < cheapest_node->push_cost)
			cheapest_node = cur;
		cur = cur->next;
	}
	return (cheapest_node);
}
