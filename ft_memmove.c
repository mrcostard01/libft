/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wipion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 19:15:17 by wipion            #+#    #+#             */
/*   Updated: 2025/10/15 20:52:01 by wipion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	*ft_memmove(void *d, const void *s, size_t n)
{
	char	*dchar;
	char	*schar;

	dchar = (char *)d;
	schar = (char *)s;
	if (ft_strlen(dchar) <= ft_strlen(schar))
	{
		while (n--)
			*dchar++ = *schar++;
	}
	if (ft_strlen(dchar) > ft_strlen(schar))
	{
		dchar += n - 1;
		schar += n - 1;
		while (n--)
			*dchar-- = *schar--;
	}
	return (dchar);
}
