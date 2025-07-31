/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 23:28:52 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/07/31 23:35:31 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list **stack_a)
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
