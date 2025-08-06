/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 19:48:26 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/08/06 19:50:03 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr_print(t_stack **stack_a, t_stack **stack_b)
{
	rr(stack_a, stack_b);
	ft_putstr_fd("rr\n", 1);
}

void	ra_print(t_stack **stack_a)
{
	ra(stack_a);
	ft_putstr_fd("ra\n", 1);
}

void	rb_print(t_stack **stack_b)
{
	rb(stack_b);
	ft_putstr_fd("rb\n", 1);
}
