/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/10 15:09:15 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/09/10 21:42:36 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "get_next_line.h"

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
		end_error_checker(&stack_a, &stack_b);
	command(&stack_a, &stack_b);
	if (is_stack_a_sort(&stack_a) && ft_stack_size(stack_b) == 0)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	end(&stack_a, &stack_b);
	return (0);
}

void	command(t_stack **stack_a, t_stack **stack_b)
{
	char	*line;

	line = get_next_line(0);
	while (line)
	{
		ft_putstr_fd(line, 1);
		if (!check_command(line, stack_a, stack_b))
			end_error_checker(stack_a, stack_b);
		free(line);
		line = get_next_line(0);
	}
}

int	check_command(char *command, t_stack **stack_a, t_stack **stack_b)
{
	if (!ft_strncmp(command, "sa\n", 3))
		return (sa(stack_a, stack_b), 1);
	else if (!ft_strncmp(command, "sb\n", 3))
		return (sb(stack_a, stack_b), 1);
	else if (!ft_strncmp(command, "ss\n", 3))
		return (ss(stack_a, stack_b), 1);
	else if (!ft_strncmp(command, "pa\n", 3))
		return (pa(stack_a, stack_b), 1);
	else if (!ft_strncmp(command, "pb\n", 3))
		return (pb(stack_a, stack_b), 1);
	else if (!ft_strncmp(command, "ra\n", 3))
		return (ra(stack_a, stack_b), 1);
	else if (!ft_strncmp(command, "rb\n", 3))
		return (rb(stack_a, stack_b), 1);
	else if (!ft_strncmp(command, "rr\n", 3))
		return (rr(stack_a, stack_b), 1);
	else if (!ft_strncmp(command, "rra\n", 4))
		return (rra(stack_a, stack_b), 1);
	else if (!ft_strncmp(command, "rrb\n", 4))
		return (rrb(stack_a, stack_b), 1);
	else if (!ft_strncmp(command, "rrr\n", 4))
		return (rrr(stack_a, stack_b), 1);
	else if (!command[0])
		return (1);
	return (0);
}
