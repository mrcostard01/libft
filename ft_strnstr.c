/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wipion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 19:10:01 by wipion            #+#    #+#             */
/*   Updated: 2025/10/22 18:52:33 by wipion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		length;
	size_t		j;

	length = 0;
	j = ft_strlen(little);
	i = 0;
	if (little == NULL && big == NULL)
		return (NULL);
	if (little[0] == '\0')
		return ((char *)big);
	while (big[i] && i < len)
	{
		while (big[i + length] == little[length] && length + i < len)
		{
			length++;
			if (length == j && big[length + i - 2] == little[length - 2])
				return ((char *)&big[i]);
		}
		i++;
	}
	return (NULL);
}
