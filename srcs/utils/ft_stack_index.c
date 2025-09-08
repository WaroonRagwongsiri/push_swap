/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_index.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 13:33:10 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/09/08 13:34:50 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_stack_index(t_stack **stack)
{
	t_stack	*cur;
	long	index;

	if (!stack)
		return ;
	cur = *stack;
	index = 0;
	while (cur)
	{
		cur->index = index;
		++index;
		cur = cur->next;
	}
}
