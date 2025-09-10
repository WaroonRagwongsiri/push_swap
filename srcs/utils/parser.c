/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 14:12:23 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/09/10 14:50:22 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// argv to link list
void	parser(int argc, char **argv, t_stack **head)
{
	int		i;

	i = 0;
	while (++i < argc)
		parse_each_argv(argv[i], head);
}

void	parse_each_argv(char *str, t_stack **head)
{
	long	val;
	char	**all_str;
	int		wc;
	int		i;
	t_stack	*node;

	wc = count_word_split(str, ' ');
	all_str = ft_split(str, ' ');
	if (!all_str)
		return (put_error());
	i = -1;
	while (++i < wc)
	{
		val = ft_atol(all_str[i]);
		if (val > __INT_MAX__ || val < -__INT_MAX__ - 1)
			return (ft_stackclear(head), free_split(all_str, wc), put_error());
		node = ft_stacknew(val);
		if (!node)
			return (ft_stackclear(head), free_split(all_str, wc), put_error());
		ft_stackadd_back(head, node);
	}
	free_split(all_str, wc);
}
