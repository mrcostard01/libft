/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wipion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 13:41:32 by wipion            #+#    #+#             */
/*   Updated: 2025/09/24 18:48:55 by wipion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strdup(const char *s)
{
	char	*arr;
	int		i;
	int		length;

	length = 0;
	i = 0;
	while (src[length])
		length++;
	arr = malloc(sizeof(char) * length);
	if (!arr)
		return (0);
	while (src[i])
	{
		arr[i] = s[i];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}
