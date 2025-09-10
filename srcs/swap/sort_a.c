/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 09:30:27 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/09/10 09:31:32 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*get_min(t_stack **stack)
{
	t_stack	*min;
	t_stack	*cur;

	min = *stack;
	cur = *stack;
	while (cur)
	{
		if (cur->val < min->val)
			min = cur;
		cur = cur->next;
	}
	return (min);
}
