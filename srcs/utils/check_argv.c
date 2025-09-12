/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_argv.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 12:59:29 by waroonwork@       #+#    #+#             */
/*   Updated: 2025/09/12 16:41:11 by waroonwork@      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// return 0 if valid return 1 if not valid
int	check_argv(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc)
	{
		if (!check_valid(argv[i]))
			return (0);
		i++;
	}
	return (1);
}

// return 1 if valid 0 if not
int	check_valid(char *str)
{
	char	**all_str;
	int		wc;
	int		i;
	int		j;

	i = 0;
	wc = count_word_split(str, ' ');
	all_str = ft_split(str, ' ');
	if (wc == 0)
		return (free_split(all_str, wc), 0);
	if (!all_str)
		return (0);
	while (i < wc)
	{
		j = 0;
		if (all_str[i][j] == '-')
			j++;
		if (!all_str[i][j])
			return (free_split(all_str, wc), 0);
		while (all_str[i][j])
		{
			if (!ft_isdigit(all_str[i][j++]))
				return (free_split(all_str, wc), 0);
		}
		i++;
	}
	return (free_split(all_str, wc), 1);
}

void	free_split(char **arr, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}
