/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/15 18:19:32 by marvin            #+#    #+#             */
/*   Updated: 2025/06/15 18:19:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*new;

	i = 0;
	if (!s)
		return (NULL);
	new = s;
	while (i < n)
	{
		new[i] = c;
		i++;
	}
	return (s);
}

// #include <stdio.h>
// int	main(void)
// {
// 	char	test[] = "abcdef";
// 	ft_memset(test, 'a', 3);
// 	printf("%s", test);
// 	return (0);
// }
