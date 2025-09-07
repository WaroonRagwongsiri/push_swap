/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sol_list.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/07 21:08:12 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/09/07 21:40:11 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	do_nothing(void *ptr)
{
	(void) ptr;
	return ;
}

int	sol_list(char *str)
{
	static t_list	*sol_list = NULL;
	t_list			*new_node;

	if (!ft_strncmp(str, "print", 6))
	{
		ft_lstiter(sol_list, print_iter);
		return (0);
	}
	if (!ft_strncmp(str, "free", 5))
	{
		ft_lstclear(&sol_list, do_nothing);
		return (0);
	}
	new_node = ft_lstnew(str);
	if (!new_node)
		return (-1);
	ft_lstadd_back(&sol_list, new_node);
	return (0);
}

void	print_iter(void *ptr)
{
	char	*str;

	str = (char *) ptr;
	ft_putendl_fd(str, 1);
}
