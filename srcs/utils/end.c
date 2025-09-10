/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   end.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 21:39:15 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/09/10 21:40:20 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	end(t_stack **stack_a, t_stack **stack_b)
{
	ft_stackclear(stack_a);
	ft_stackclear(stack_b);
	sol_list("free");
	exit(0);
}

void	end_error_checker(t_stack **stack_a, t_stack **stack_b)
{
	ft_stackclear(stack_a);
	ft_stackclear(stack_b);
	sol_list("free");
	write(1, "Error\n", 6);
	exit(1);
}
