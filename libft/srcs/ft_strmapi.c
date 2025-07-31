/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/18 17:28:20 by marvin            #+#    #+#             */
/*   Updated: 2025/06/18 17:28:20 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*new;
	size_t	i;

	new = ft_strdup(s);
	if (!new)
	{
		return (NULL);
	}
	i = 0;
	while (new[i])
	{
		new[i] = f(i, new[i]);
		i++;
	}
	return (new);
}

// #include <stdio.h>

// char	c_to_a(unsigned int index, char c)
// {
// 	c = '0' + index;
// 	return (c);
// }

// int	main(void)
// {
// 	char	*new;

// 	new = ft_strmapi("abcdef", c_to_a);
// 	if (new)
// 	{
// 		printf("%s\n", new);
// 		free(new);
// 	}
// 	return (0);
// }
