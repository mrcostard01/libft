/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wipion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 16:58:08 by wipion            #+#    #+#             */
/*   Updated: 2025/10/22 22:18:14 by wipion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	
	char 	*a;

	i = 0;
	a = 0;
	j = 0;

	/*if(*(char *)s == c)
	{
		a = (char *)s;
		return (a);
	}*/
	while (i <= n)
	{
		while(*(char *)s == (char)c && j <= n )
		{
			a = (char *)s;
			j++;
			if (j == (size_t)ft_strlen((char *)s))
				return(a);
		}
		s++;
		a++;
		i++;
	}
	a = NULL;
	return ((void *)a);
}
