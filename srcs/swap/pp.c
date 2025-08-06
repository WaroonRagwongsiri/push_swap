/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 20:29:21 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/08/06 19:44:30 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*first;
	t_stack	*curr;

	if (ft_stack_size(*stack_b) == 0)
		return ;
	first = *stack_b;
	*stack_b = (*stack_b)->next;
	curr = *stack_b;
	while (curr)
	{
		curr->index -= 1;
		curr = curr->next;
	}
	first->next = NULL;
	first->prev = NULL;
	ft_stackadd_front(stack_a, first);
}

void	pb(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*first;
	t_stack	*curr;

	if (ft_stack_size(*stack_a) == 0)
		return ;
	first = *stack_a;
	*stack_a = (*stack_a)->next;
	curr = *stack_a;
	while (curr)
	{
		curr->index -= 1;
		curr = curr->next;
	}
	first->next = NULL;
	first->prev = NULL;
	ft_stackadd_front(stack_b, first);
}
