/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wipion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:17:38 by wipion            #+#    #+#             */
/*   Updated: 2025/11/01 00:03:28 by wipion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	if (len > (size_t)ft_strlen(s))
		len = ft_strlen(s);
	if (start > (size_t)ft_strlen(s))
	{
		subs = malloc(sizeof(char) * 1);
		if(!subs)
			return (NULL);
		subs[0] = '\0';
		return(subs);
	}
	if ()
	else
		subs = malloc(sizeof(char) * (len + 1));
	if (!subs)
		return (NULL);
	while (s[i])
	{
		if (j < len && i >= start)
		{
			subs[j] = s[i];
			j++;
		}
		i++;
	}
	subs[j] = '\0';
	return (subs);
}
