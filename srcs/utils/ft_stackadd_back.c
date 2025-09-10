/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackadd_back.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 11:36:35 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/09/10 10:24:20 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stackadd_back(t_stack **head, t_stack *new)
{
	t_stack	*curr;

	if (!head)
		return ;
	if (*head == NULL)
	{
		new->index = 0;
		*head = new;
		return ;
	}
	curr = *head;
	while (curr->next != NULL)
		curr = curr->next;
	new->next = NULL;
	curr->next = new;
	ft_stack_index(head);
}
