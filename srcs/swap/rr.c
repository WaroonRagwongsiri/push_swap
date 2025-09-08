/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 12:16:48 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/09/08 13:39:06 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*first;

	if (ft_stack_size(*stack_a) == 0 || ft_stack_size(*stack_a) == 1)
		return ;
	first = *stack_a;
	*stack_a = (*stack_a)->next;
	first->next = NULL;
	first->prev = ft_stack_last(*stack_a);
	ft_stack_last(*stack_a)->next = first;
	ft_stack_index(stack_a);
	if (sol_list("ra") < 0)
		end(stack_a, stack_b);
}

void	rb(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*first;

	if (ft_stack_size(*stack_b) == 0 || ft_stack_size(*stack_b) == 1)
		return ;
	first = *stack_b;
	*stack_b = (*stack_b)->next;
	first->next = NULL;
	first->prev = ft_stack_last(*stack_b);
	ft_stack_last(*stack_b)->next = first;
	ft_stack_index(stack_b);
	if (sol_list("rb") < 0)
		end(stack_a, stack_b);
}

void	rr(t_stack **stack_a, t_stack **stack_b)
{
	ra(stack_a, stack_b);
	rb(stack_a, stack_b);
}
