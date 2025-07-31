/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 23:36:10 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/07/31 23:36:22 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rb(t_list **stack_b)
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
