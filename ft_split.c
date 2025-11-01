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

char	*getword(int *start, const char *s, int c)
{
	int		i;
	char	*str;

	i = *start;
	while (s[i] != c && s[i] != '\0')
		i++;
	str = malloc((i -(*start) + 1) * sizeof(char));
	if (str == NULL)
	{
		(*start)++;
		return (NULL);
	}
	i = 0;
	while (s[(*start)] != c && s[(*start)] != '\0')
	{
		str[i] = s[(*start)];
		i++;
		(*start)++;
	}
	str[i] = '\0';
	while (s[(*start)] == c)
		(*start)++;
	return (str);
}

char	**make_empty_array(char *str_to_free)
{
	char	**arr;

	if (str_to_free != NULL)
		free(str_to_free);
	arr = malloc((1) * sizeof(char *));
	if (!arr)
		return (NULL);
	arr[0] = NULL;
	return (arr);
}

int	get_size_array(char *s_trimmed, char c)
{
	int	i;
	int	len;

	i = 0;
	len = 0;
	while (s_trimmed[i] != '\0')
	{
		if (s_trimmed[i] == c)
		{
			len++;
			while (s_trimmed[i] == c)
				i++;
		}
		else
			i++;
	}
	return (len);
}

char	**make_one_line_array(const char *s)
{
	char	**arr;

	arr = malloc((2) * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	arr[0] = ft_strdup(s);
	if (arr[0] == NULL)
		return (NULL);
	arr[1] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		start;
	int		len;
	char	**str;
	char	*s_trimmed;

	i = 0;
	start = 0;
	if (s == NULL || s[0] == '\0')
		return (make_empty_array(NULL));
	if (c == '\0')
		return (make_one_line_array(s));
	s_trimmed = ft_strtrim(s, &c);
	if (s_trimmed == NULL)
		return (NULL);
	if (s_trimmed[0] == '\0')
			return (make_empty_array(s_trimmed));
	len = get_size_array(s_trimmed, c);
	str = malloc((len + 2) * sizeof(char *));
	if (!str) {
			free(s_trimmed);
			return (NULL);
		}
	while (i < (len + 1)) {
		if ((str[i] = getword(&start, s_trimmed, c)) == NULL) {
				free(s_trimmed);
				return (NULL);
		}
		i++;
	}
	str[i] = NULL;
	free(s_trimmed);
	return (str);
}

int		main
{
char	**str;
}