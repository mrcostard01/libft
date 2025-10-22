/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wipion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 12:51:48 by wipion            #+#    #+#             */
/*   Updated: 2025/10/20 16:52:35 by wipion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	limit;
	unsigned int	len_des;
	unsigned int	len_src;

	len_des = 0;
	len_src = 0;
	i = 0;
	while (dest[len_des])
		len_des++;
	while ( src[len_src])
		len_src++;
	limit = size - len_des - 1;
	if (len_des >= size)
		return (len_src + size);
	while (src[i] && i < limit)
	{
		dest[i + len_des] = src[i];
		i++;
	}
	dest[len_des + i] = '\0';
	return (len_des + len_src);
}
