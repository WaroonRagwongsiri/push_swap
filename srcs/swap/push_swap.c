/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 17:35:12 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/09/09 21:47:12 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// push_swap
void	push_swap(t_stack **stack_a, t_stack **stack_b)
{
	if (is_stack_a_sort(stack_a))
		return ;
	else if (ft_stack_size(*stack_a) <= 3)
		small_sort(stack_a, stack_b);
	else
		big_sort(stack_a, stack_b);
}
