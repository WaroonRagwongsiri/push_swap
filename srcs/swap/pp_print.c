/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pp_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 19:46:13 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/08/06 19:47:40 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pa_print(t_stack **stack_a, t_stack **stack_b)
{
	pa(stack_a, stack_b);
	ft_putstr_fd("pa\n", 1);
}

void	pb_print(t_stack **stack_a, t_stack **stack_b)
{
	pb(stack_a, stack_b);
	ft_putstr_fd("pb\n", 1);
}
