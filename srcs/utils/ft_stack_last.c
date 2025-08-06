/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stack_last.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 17:26:25 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/08/06 17:27:55 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_stack_last(t_stack *stack)
{
	t_stack	*last;

	last = NULL;
	if (stack == NULL)
		return NULL;
	while (stack->next)
	{
		stack = stack->next;
	}
	last = stack;
	return (last);
}
