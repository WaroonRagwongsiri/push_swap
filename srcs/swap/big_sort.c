/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 11:24:48 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/09/08 16:02:48 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	big_sort(t_stack **stack_a, t_stack **stack_b)
{
	if (ft_stack_size(*stack_a) == 4)
		pb(stack_a, stack_b);
	else
	{
		pb(stack_a, stack_b);
		pb(stack_a, stack_b);
	}
	while (ft_stack_size(*stack_a) > 3)
		cheapest_to_b(stack_a, stack_b);
	sort_a_three_asc(stack_a, stack_b);
	b_to_a(stack_a, stack_b);
	if (is_stack_a_sort(stack_a))
		return ;
	sort_a(stack_a);
}

void	cheapest_to_b(t_stack **stack_a, t_stack **stack_b)
{
	(void) stack_a;
	(void) stack_b;
}

void	b_to_a(t_stack **stack_a, t_stack **stack_b)
{
	(void) stack_a;
	(void) stack_b;
}

void	sort_a(t_stack **stack_a)
{
	(void) stack_a;
}
