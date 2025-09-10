/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 12:16:48 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/09/10 10:23:49 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*first;
	t_stack	*last;

	if (ft_stack_size(*stack_a) < 2)
		return ;
	first = *stack_a;
	*stack_a = first->next;
	last = ft_stack_last(*stack_a);
	last->next = first;
	first->next = NULL;
	ft_stack_index(stack_a);
	ft_stack_index(stack_b);
	if (sol_list("ra") < 0)
		end(stack_a, stack_b);
}

void	rb(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*first;
	t_stack	*last;

	if (ft_stack_size(*stack_b) < 2)
		return ;
	first = *stack_b;
	*stack_b = first->next;
	last = ft_stack_last(*stack_b);
	last->next = first;
	first->next = NULL;
	ft_stack_index(stack_a);
	ft_stack_index(stack_b);
	if (sol_list("rb") < 0)
		end(stack_a, stack_b);
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	ra(stack_a, stack_b);
	rb(stack_a, stack_b);
}
