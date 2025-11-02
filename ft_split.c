/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wipion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 22:42:17 by wipion            #+#    #+#             */
/*   Updated: 2025/10/31 23:19:58 by wipion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 1;
	while (i <= n)
	{
		*(char *)s = '\0';
		s++;
		i++;
	}
}
void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*arr;

	if (((nmemb * size) > 214743647 ) || ((nmemb * size) == 0))
		return (NULL);
	arr = malloc(nmemb * size);
	if (!arr)
		return (NULL);
	ft_bzero(arr, (nmemb * size));
	return (arr);
}*/
char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	size_t		len;
	char	**str;

	i = 0;
	len = 1;
	j = 0;
	k = 0;
	if (s == NULL || s[0] == '\0')
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == c)
			len++;
		i++;
	}
	j = i;
	while (s[j] == c)
	{
		j++;
		len++;
	}
	str = ft_calloc(len, sizeof(char *));
	if (str == NULL)
		return (0);
	if (c == '\0')
	{
		str[0][0] = '\0';
		str[1] = NULL;
		return (str);
	}
	i = 0;
	while (str[i] != NULL)
	{
		while (s[j] != c && s[j] != '\0')
			j++;
		str[i] = malloc(sizeof(char) * j);
		/*if (!str)
		{
			free(str[i]);
			free(str);
			return (NULL);	
		}*/
		while (k < j)
		{
			str[i][k] = s[k];
			k++;
			str++;
		}
		i++;
	}
	str[i] = NULL;
	return (str);	
}/*
#include <stdio.h>
int	main()
{
	char **strs = ft_split("hello!", ' ');

	int	i = 0;

	while (strs[i] != NULL)
	{
		printf("%s",strs[i]);
		i++;
	}	
}*/
