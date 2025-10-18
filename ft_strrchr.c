/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wipion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/13 16:48:18 by wipion            #+#    #+#             */
/*   Updated: 2025/10/18 15:14:00 by wipion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(char *str, char to_find)
{
	int	i;
	int	length;

	length = ft_strlen(str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[length - i] == to_find)
		{
			return (&str[length - i]);
		}
		i++;
	}
	str = 0;
	return (str);
}
