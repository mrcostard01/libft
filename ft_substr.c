/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wipion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 15:17:38 by wipion            #+#    #+#             */
/*   Updated: 2025/10/20 16:53:48 by wipion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;
	size_t	j;
	int	total;

	i = 0;
	j = 0;
	total = (int)len + 1;
	if (!s)
		return (NULL);
	if (len > 9223372036854775807)
		total = ft_strlen(s) + 1; 
	subs = malloc(sizeof(char)* total);
	if(!subs)
		return((void*)0);
	while(s[i])
	{
		if(j < len && i >= start)
		{
			subs[j] = s[i];
			j++;
		}
		i++;
	}
	subs[j] = '\0';
	return (subs);
}
