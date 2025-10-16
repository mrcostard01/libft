/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wipion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:36:08 by wipion            #+#    #+#             */
/*   Updated: 2025/10/14 16:03:56 by wipion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(char *str, char to_find)
{
	int	i;
	int	length;
	int	j;

	length = 0;
	j = 1;
	i = 0;
	if (j == 0)
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + length] == to_find)
		{
			length++;
			if (length == j)
				return (&str[i]);
		}
		i++;
	}
	return (&str[i]);
}
#include <stdio.h>
#include <string.h>
int	main()
{
	char 	test[] = "ouiohfuohwr";
	printf("%s\n", ft_strchr(test, '\0'));
	printf("%s", strchr(test, '\0'));
}
