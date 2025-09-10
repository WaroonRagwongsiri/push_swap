/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stacknew.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 11:40:26 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/09/10 10:24:32 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*ft_stacknew(long val)
{
	t_stack	*new;

	new = ft_calloc(1, sizeof(t_stack));
	if (!new)
		return (NULL);
	new->val = val;
	new->index = -1;
	new->push_cost = -1;
	new->target = NULL;
	new->next = NULL;
	return (new);
}
