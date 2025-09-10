/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_duplicate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 17:50:53 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/09/10 17:58:31 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_duplicate(t_stack **stack_a)
{
	t_stack	*cur;
	t_stack	*check;

	cur = *stack_a;
	while (cur)
	{
		check = cur->next;
		while (check)
		{
			if (cur->val == check->val)
				return (1);
			check = check->next;
		}
		cur = cur->next;
	}
	return (0);
}
