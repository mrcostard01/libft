/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wipion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 12:13:59 by wipion            #+#    #+#             */
/*   Updated: 2025/10/22 14:43:10 by wipion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <strings.h>
#include <unistd.h>

#include "libft.h"

int	ft_char_in_list(char c, char const *list)
{
	int	i;

	i = 0;
	if (!list)
		return (0);
	while (list[i] != '\0')
	{
		if (list[i] == c)
			return (1);
		i++;
	}
	return (0);
}
int startcounter (char const *s1, char const *set)
{
	int		i;
	int		start;

	i = 0;
	start = 0;
	while (s1[i] != '\0')
	{
		if (ft_char_in_list(s1[i], set))
			start++;
		else
			break;
		i++;
	}
return (start);
}
int  endcounter (char const *s1, char const *set)
{
	int		i;
	int		end;

	i = ft_strlen(s1) - 1;
	end = ft_strlen(s1) - 1;
	while (s1[i] != '\0')
	{
		if (ft_char_in_list(s1[i], set))
			end--;
		else
			break;
		i--;
	}
	return (end);
}
char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*output;

	start = startcounter(s1, set);
	end = endcounter(s1, set);
	if (start > end)
		output = malloc(sizeof(char) * ((start + end) + 2));
	else
		output = malloc(sizeof(char) * ((end - start) + 2 ));
	if (!output)
		return (NULL);
	s1 += start;
	ft_strlcpy(output, (char *)s1, (end - start) + 2);
	return (output);
}
