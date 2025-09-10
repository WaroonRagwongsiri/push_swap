/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stackadd_front.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 15:16:28 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/09/10 10:24:25 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stackadd_front(t_stack **head, t_stack *new)
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
	new->index = 0;
	new->next = curr;
	ft_stack_index(head);
	*head = new;
}
