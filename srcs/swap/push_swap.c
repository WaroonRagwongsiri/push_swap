/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 17:35:12 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/09/07 20:06:40 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// push_swap
void	push_swap(t_stack **stack_a, t_stack **stack_b)
{
	if (ft_stack_size(*stack_a) <= 3)
		small_sort(stack_a);
	print_all_stack(*stack_a, *stack_b);
}

int	is_sort(t_stack **stack_a)
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

void	small_sort(t_stack **stack_a)
{
	if (ft_stack_size(*stack_a) == 0 || ft_stack_size(*stack_a) == 1 || is_sort(stack_a))
		return ;
	if (ft_stack_size((*stack_a)) == 2)
	{
		ft_putstr_fd("sa\n", 1);
		sa(*stack_a);
		return ;
	}
	sort_three(stack_a);
}

void	sort_three(t_stack **stack)
{
	long	top;
	long	middle;
	long	last;

	top = (*stack)->val;
	middle = (*stack)->next->val;
	last = (*stack)->next->next->val;
	if (top > middle && top < last)
		sa(stack);
	else if (top > middle && top > last)
	{
		ra(stack);
		if (is_sort(stack))
			return ;
		sa(stack);
	}
	else
	{
		rra(stack);
		if (is_sort(stack))
			return ;
		sa(stack);
	}
}
