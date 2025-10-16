/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wipion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/09 11:39:48 by wipion            #+#    #+#             */
/*   Updated: 2025/10/15 21:02:51 by wipion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = size - 1;
	if (size == 0)
		return (ft_strlen(src));
	while (i <= j && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[size - 1] = '\0';
	return (ft_strlen(src));
}
