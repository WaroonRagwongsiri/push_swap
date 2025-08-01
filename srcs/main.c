/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 14:53:00 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/08/01 22:41:16 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;

	if (argc < 2)
		put_error();
	if (!check_argv(argc, argv))
		put_error();
	stack_a = NULL;
	stack_b = NULL;
	parser(argc, argv, &stack_a);
	push_swap(&stack_a, &stack_b);
	end(stack_a, stack_b);
	return (0);
}

void	end(t_list *stack_a, t_list *stack_b)
{
	ft_lstclear(&stack_a, free);
	ft_lstclear(&stack_b, free);
	exit(0);
}
