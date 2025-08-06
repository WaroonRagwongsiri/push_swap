/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 17:57:56 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/08/06 17:24:52 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_stack *stack)
{
	t_stack	*curr;

	curr = stack;
	while (curr)
	{
		ft_putstr_fd("Index: ", 1);
		ft_putnbr_fd(curr->index, 1);
		ft_putstr_fd(" : ", 1);
		ft_putnbr_fd(curr->val, 1);
		ft_putchar_fd('\n', 1);
		curr = curr->next;
	}
}

void	put_nbr(void *nbr)
{
	int	*n_nbr;
	int	n;

	if (!nbr)
		return ;
	n_nbr = nbr;
	n = *n_nbr;
	ft_putnbr_fd(n, 1);
	write(1, "\n", 1);
}

void	print_all_stack(t_stack *stack_a, t_stack *stack_b)
{
	ft_putstr_fd("stack_a Size : ", 1);
	ft_putnbr_fd(ft_stack_size(stack_a), 1);
	ft_putstr_fd("\n", 1);
	ft_putstr_fd("----------\n", 1);
	print_stack(stack_a);
	ft_putstr_fd("----------\n", 1);
	ft_putstr_fd("stack_b Size : ", 1);
	ft_putnbr_fd(ft_stack_size(stack_b), 1);
	ft_putstr_fd("\n", 1);
	ft_putstr_fd("----------\n", 1);
	print_stack(stack_b);
	ft_putstr_fd("----------\n", 1);
}
