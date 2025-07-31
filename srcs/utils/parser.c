/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 14:12:23 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/07/31 18:06:09 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// argv to link list
void	parser(int argc, char **argv, t_list **head)
{
	int		i;
	int		*tmp;
	t_list	*node;

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
		node = ft_lstnew(tmp);
		if (!node)
		{
			ft_lstclear(head, free);
			free(*head);
			free(tmp);
			put_error();
		}
		ft_lstadd_back(head, node);
	}
}
