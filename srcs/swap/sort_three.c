/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 11:23:32 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/09/08 14:36:17 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_stack_a_sort(t_stack **stack_a)
{
	t_stack	*curr;

	curr = *stack_a;
	while (curr->next)
	{
		if (curr->val > curr->next->val)
			return (0);
		curr = curr->next;
	}
	return (1);
}

void	small_sort(t_stack **stack_a, t_stack **stack_b)
{
	if (ft_stack_size(*stack_a) == 0 || ft_stack_size(*stack_a) == 1
		|| is_stack_a_sort(stack_a))
		return ;
	if (ft_stack_size((*stack_a)) == 2)
	{
		sa(stack_a, stack_b);
		return ;
	}
	sort_a_three_asc(stack_a, stack_b);
}

void	sort_a_three_asc(t_stack **stack_a, t_stack **stack_b)
{
	long	top;
	long	middle;
	long	last;

	top = (*stack_a)->val;
	middle = (*stack_a)->next->val;
	last = (*stack_a)->next->next->val;
	if (top > middle && top < last)
		sa(stack_a, stack_b);
	else if (top > middle && top > last)
	{
		ra(stack_a, stack_b);
		if (is_stack_a_sort(stack_a))
			return ;
		sa(stack_a, stack_b);
	}
	else
	{
		rra(stack_a, stack_b);
		if (is_stack_a_sort(stack_a))
			return ;
		sa(stack_a, stack_b);
	}
}
