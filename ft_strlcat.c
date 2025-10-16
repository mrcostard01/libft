/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wipion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 12:51:48 by wipion            #+#    #+#             */
/*   Updated: 2025/10/15 20:45:29 by wipion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	limit;
	unsigned int	len_des;
	unsigned int	len_src;

	i = 0;
	len_src = 0;
	len_des = 0;
	limit = 0;
	while (dest[len_des] && len_des < size)
		len_des++;
	while (src[len_src])
		len_src++;
	limit = size - len_des - 1;
	if (len_des == 0)
		return (len_src);
	if (len_src == 0)
		return (len_des);
	while (src[i] && dest[i] && i < limit)
	{
		dest[i + len_des] = src[i];
		i++;
	}
	dest[i + len_des] = '\0';
	return (len_des + len_src);
}
