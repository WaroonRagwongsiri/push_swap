/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 14:12:23 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/08/06 15:38:51 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// argv to link list
void	parser(int argc, char **argv, t_stack **head)
{
	int		i;
	int		val;
	t_stack	*node;

	i = 0;
	while (++i < argc)
	{
		val = ft_atoi(argv[i]);
		node = ft_stacknew(val);
		if (!node)
		{
			ft_stackclear(head);
			put_error();
		}
		ft_stackadd_back(head, node);
	}
}
