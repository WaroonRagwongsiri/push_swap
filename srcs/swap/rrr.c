/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 23:37:38 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/08/01 22:45:00 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_list **stack_a)
{
	t_list	*current;
	t_list	*last;

	if (ft_lstsize(*stack_a) == 0 || ft_lstsize(*stack_a) == 1)
		return ;
	current = *stack_a;
	last = ft_lstlast(*stack_a);
	while (current->next->next != NULL)
	{
		current = current->next;
	}
	current->next = NULL;
	ft_lstadd_front(stack_a, last);
}

void	rrb(t_list **stack_b)
{
	t_list	*current;
	t_list	*last;

	if (ft_lstsize(*stack_b) == 0 || ft_lstsize(*stack_b) == 1)
		return ;
	current = *stack_b;
	last = ft_lstlast(*stack_b);
	while (current->next->next != NULL)
	{
		current = current->next;
	}
	current->next = NULL;
	ft_lstadd_front(stack_b, last);
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	rra(stack_a);
	rrb(stack_b);
}
