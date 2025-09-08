/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 23:37:38 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/09/08 13:39:48 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*current;
	t_stack	*last;

	if (ft_stack_size(*stack_a) == 0 || ft_stack_size(*stack_a) == 1)
		return ;
	current = *stack_a;
	last = ft_stack_last(*stack_a);
	while (current->next->next != NULL)
		current = current->next;
	current->next = NULL;
	ft_stackadd_front(stack_a, last);
	ft_stack_index(stack_a);
	if (sol_list("rra") < 0)
		end(stack_a, stack_b);
}

void	rrb(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*current;
	t_stack	*last;

	if (ft_stack_size(*stack_b) == 0 || ft_stack_size(*stack_b) == 1)
		return ;
	current = *stack_b;
	last = ft_stack_last(*stack_b);
	while (current->next->next != NULL)
		current = current->next;
	current->next = NULL;
	ft_stackadd_front(stack_b, last);
	ft_stack_index(stack_b);
	if (sol_list("rrb") < 0)
		end(stack_a, stack_b);
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	rra(stack_a, stack_b);
	rrb(stack_a, stack_b);
}
