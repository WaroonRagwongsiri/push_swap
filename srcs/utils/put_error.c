/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_error.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 12:46:36 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/07/31 21:45:45 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// write Error\n -> exit with status 1
void	put_error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

// write Error\n -> free stack -> exit with status 1
void	exit_lst(t_list *stack_a, t_list *stack_b)
{
	write(2, "Error\n", 6);
	if (stack_a)
		ft_lstclear(&stack_a, free);
	if (stack_b)
		ft_lstclear(&stack_b, free);
	exit(1);
}
