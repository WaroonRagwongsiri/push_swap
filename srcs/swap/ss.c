/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 20:25:53 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/08/06 18:39:53 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sa(t_stack *stack_a)
{
	long	tmp;

	if (ft_stack_size(stack_a) == 0 || ft_stack_size(stack_a) == 1)
		return ;
	tmp = stack_a->val;
	stack_a->val = stack_a->next->val;
	stack_a->next->val = tmp;
}

void	sb(t_stack *stack_b)
{
	long	tmp;

	if (ft_stack_size(stack_b) == 0 || ft_stack_size(stack_b) == 1)
		return ;
	tmp = stack_b->val;
	stack_b->val = stack_b->next->val;
	stack_b->next->val = tmp;
}

void	ss(t_stack *stack_a, t_stack *stack_b)
{
	sa(stack_a);
	sb(stack_b);
}
