/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 17:35:12 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/08/01 22:48:13 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// push_swap
void	push_swap(t_list **stack_a, t_list **stack_b)
{
	sa(*stack_a);
	sb(*stack_b);
	ss(*stack_a, *stack_b);
	pa(stack_a, stack_b);
	pb(stack_a, stack_b);
	ra(stack_a);
	rb(stack_b);
	rr(stack_a, stack_b);
	rra(stack_a);
	rrb(stack_b);
	rrr(stack_a, stack_b);
	print_all_stack(*stack_a, *stack_b);
}
