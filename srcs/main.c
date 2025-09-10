/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/10 14:53:00 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/09/10 17:59:45 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*stack_a;
	t_stack	*stack_b;

	if (argc < 2)
		put_error();
	if (!check_argv(argc, argv))
		put_error();
	stack_a = NULL;
	stack_b = NULL;
	parser(argc, argv, &stack_a);
	if (is_duplicate(&stack_a))
		end(&stack_a, &stack_b);
	push_swap(&stack_a, &stack_b);
	sol_list("print");
	end(&stack_a, &stack_b);
	return (0);
}

void	end(t_stack **stack_a, t_stack **stack_b)
{
	ft_stackclear(stack_a);
	ft_stackclear(stack_b);
	sol_list("free");
	exit(1);
}
