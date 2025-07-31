/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_stack.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 17:57:56 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/07/31 20:43:58 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_stack(t_list *stack)
{
	ft_lstiter(stack, put_nbr);
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

void	print_all_stack(t_list *stack_a, t_list *stack_b)
{
	ft_putstr_fd("stack_a\n", 1);
	ft_putstr_fd("----------\n", 1);
	print_stack(stack_a);
	ft_putstr_fd("----------\n", 1);
	ft_putstr_fd("stack_b\n", 1);
	ft_putstr_fd("----------\n", 1);
	print_stack(stack_b);
	ft_putstr_fd("----------\n", 1);
}
