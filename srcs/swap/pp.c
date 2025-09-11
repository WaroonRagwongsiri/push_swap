/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pp.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 20:29:21 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/09/11 12:05:24 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*first;

	if (ft_stack_size(*stack_b) == 0)
		return ;
	first = *stack_b;
	*stack_b = (*stack_b)->next;
	first->next = NULL;
	ft_stackadd_front(stack_a, first);
	ft_stack_index(stack_a);
	ft_stack_index(stack_b);
	if (sol_list("pa") < 0)
		end_error_checker(stack_a, stack_b);
}

void	pb(t_stack **stack_a, t_stack **stack_b)
{
	t_stack	*first;

	if (ft_stack_size(*stack_a) == 0)
		return ;
	first = *stack_a;
	*stack_a = (*stack_a)->next;
	first->next = NULL;
	ft_stackadd_front(stack_b, first);
	ft_stack_index(stack_a);
	ft_stack_index(stack_b);
	if (sol_list("pb") < 0)
		end_error_checker(stack_a, stack_b);
}
