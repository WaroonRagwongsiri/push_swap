/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 23:37:38 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/09/10 10:15:03 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*current;
	t_stack	*last;

	if (ft_stack_size(*stack_a) < 2)
		return ;
	current = *stack_a;
	last = ft_stack_last(*stack_a);
	while (current->next != last)
		current = current->next;
	current->next = NULL;
	last->prev = NULL;
	last->next = *stack_a;
	(*stack_a)->prev = last;
	*stack_a = last;
	ft_stack_index(stack_a);
	ft_stack_index(stack_b);
	if (sol_list("rra") < 0)
		end(stack_a, stack_b);
}

void	rrb(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*current;
	t_stack	*last;

	if (ft_stack_size(*stack_b) < 2)
		return ;
	current = *stack_b;
	last = ft_stack_last(*stack_b);
	while (current->next != last)
		current = current->next;
	current->next = NULL;
	last->prev = NULL;
	last->next = *stack_b;
	(*stack_b)->prev = last;
	*stack_b = last;
	ft_stack_index(stack_a);
	ft_stack_index(stack_b);
	if (sol_list("rrb") < 0)
		end(stack_a, stack_b);
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	rra(stack_a, stack_b);
	rrb(stack_a, stack_b);
}
