/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wipion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 19:10:01 by wipion            #+#    #+#             */
/*   Updated: 2025/10/16 19:10:26 by wipion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strlength(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		length;
	size_t		j;


	length = 0;
	j = ft_strlength(little);
	i = 0;
	if (j == 0)
	{
		return ((char *)big);
	}
	while (big[i] != '\0' && i <= len )
	{
		while (big[i + length] == little[length])
		{
			if (length + i == j)
				return ();
		}
		i++;
	}
	return (0);
}
#include <stdio.h>
int	main()
{
	char	test[] = "pijkjrg";
	char	find[] = "ij";
	char 	*ptr = ft_strnstr(test,find, 7);

	printf("%s", ptr);
}
