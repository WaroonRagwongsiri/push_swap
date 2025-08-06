/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 17:35:12 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/08/06 18:46:09 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// push_swap
void	push_swap(t_stack **stack_a, t_stack **stack_b)
{
	rra(stack_a);
	print_all_stack(*stack_a, *stack_b);
}
