/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 20:25:53 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/09/09 21:46:54 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack **stack_a, t_stack **stack_b)
{
	long	tmp;

	if (ft_stack_size((*stack_a)) == 0 || ft_stack_size((*stack_a)) == 1)
		return ;
	tmp = (*stack_a)->val;
	(*stack_a)->val = (*stack_a)->next->val;
	(*stack_a)->next->val = tmp;
	ft_stack_index(stack_a);
	ft_stack_index(stack_b);
	if (sol_list("sa") < 0)
		end(stack_a, stack_b);
}

void	sb(t_stack **stack_a, t_stack **stack_b)
{
	long	tmp;

	if (ft_stack_size((*stack_b)) == 0 || ft_stack_size((*stack_b)) == 1)
		return ;
	tmp = (*stack_b)->val;
	(*stack_b)->val = (*stack_b)->next->val;
	(*stack_b)->next->val = tmp;
	ft_stack_index(stack_a);
	ft_stack_index(stack_b);
	if (sol_list("sb") < 0)
		end(stack_a, stack_b);
}

void	ss(t_stack **stack_a, t_stack **stack_b)
{
	sa(stack_a, stack_b);
	sb(stack_a, stack_b);
}
