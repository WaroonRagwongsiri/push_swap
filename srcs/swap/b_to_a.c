/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   b_to_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 18:41:13 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/09/10 10:14:24 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	set_target_b_to_a(t_stack **stack_a, t_stack *node_stack_b)
{
	t_stack	*target;
	t_stack	*min;
	t_stack	*cur;

	cur = *stack_a;
	target = NULL;
	min = *stack_a;
	while (cur)
	{
		if (cur->val < min->val)
			min = cur;
		if (cur->val >= node_stack_b->val)
		{
			if (target == NULL || cur->val < target->val)
				target = cur;
		}
		cur = cur->next;
	}
	if (target == NULL)
		target = min;
	node_stack_b->target = target;
}

void	target_a_to_top(t_stack *choosen_node
	, t_stack **stack_a, t_stack **stack_b)
{
	int	op_count;

	op_count = 0;
	if (choosen_node->target->index > ft_stack_size(*stack_a) / 2)
	{
		op_count += ft_stack_size(*stack_a) - choosen_node->target->index;
		while (op_count-- > 0)
			rra(stack_a, stack_b);
	}
	else
	{
		op_count += choosen_node->target->index;
		while (op_count-- > 0)
			ra(stack_a, stack_b);
	}
}
