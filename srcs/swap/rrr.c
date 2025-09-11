/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 23:37:38 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/09/11 12:05:45 by waroonwork@      ###   ########.fr       */
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
	last->next = *stack_a;
	*stack_a = last;
	ft_stack_index(stack_a);
	ft_stack_index(stack_b);
	if (sol_list("rra") < 0)
		end_error_checker(stack_a, stack_b);
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
	last->next = *stack_b;
	*stack_b = last;
	ft_stack_index(stack_a);
	ft_stack_index(stack_b);
	if (sol_list("rrb") < 0)
		end_error_checker(stack_a, stack_b);
}

void	rrr(t_stack **stack_a, t_stack **stack_b)
{
	rra_no_print(stack_a, stack_b);
	rrb_no_print(stack_a, stack_b);
	if (sol_list("rrr") < 0)
		end_error_checker(stack_a, stack_b);
}

void	rra_no_print(t_stack **stack_a, t_stack **stack_b)
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
	last->next = *stack_a;
	*stack_a = last;
	ft_stack_index(stack_a);
	ft_stack_index(stack_b);
}

void	rrb_no_print(t_stack **stack_a, t_stack **stack_b)
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
	last->next = *stack_b;
	*stack_b = last;
	ft_stack_index(stack_a);
	ft_stack_index(stack_b);
}
