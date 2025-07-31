/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 14:12:23 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/07/31 21:23:23 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// argv to link list
void	parser(int argc, char **argv, t_list **head)
{
	int		i;
	int		*tmp;

	i = 0;
	while (++i < argc)
	{
		tmp = ft_calloc(1, sizeof(int));
		if (!tmp)
		{
			ft_lstclear(head, free);
			free(*head);
			put_error();
		}
		*tmp = ft_atoi(argv[i]);
		ft_lstadd_back(head, ft_lstnew(tmp));
	}
}
