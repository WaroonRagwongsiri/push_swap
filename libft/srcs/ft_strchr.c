/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 23:59:13 by marvin            #+#    #+#             */
/*   Updated: 2025/06/15 23:59:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c);

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	new_c;
	size_t	len;

	i = 0;
	len = ft_strlen(s);
	new_c = c;
	while (i <= len)
	{
		if (s[i] == new_c)
		{
			return ((char *) &s[i]);
		}
		i++;
	}
	return (NULL);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%s\n",ft_strchr("abcdef",'c'));
// 	return (0);
// }
