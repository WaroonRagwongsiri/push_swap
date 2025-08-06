/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 19:51:22 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/08/06 19:53:43 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss_print(t_stack **stack_a, t_stack **stack_b)
{
	ss(*stack_a, *stack_b);
	ft_putstr_fd("ss\n", 1);
}

void	sa_print(t_stack **stack_a)
{
	sa(*stack_a);
	ft_putstr_fd("sa\n", 1);
}

void	sb_print(t_stack **stack_b)
{
	sa(*stack_b);
	ft_putstr_fd("sb\n", 1);
}
