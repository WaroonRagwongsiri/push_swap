/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 19:54:52 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/08/06 19:56:31 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rrr_print(t_stack **stack_a, t_stack **stack_b)
{
	rrr(stack_a, stack_b);
	ft_putstr_fd("rrr\n", 1);
}

void	rra_print(t_stack **stack_a)
{
	rra(stack_a);
	ft_putstr_fd("rra\n", 1);
}

void	rrb_print(t_stack **stack_b)
{
	rrb(stack_b);
	ft_putstr_fd("rrb\n", 1);
}
