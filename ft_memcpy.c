/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wipion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 18:30:41 by wipion            #+#    #+#             */
/*   Updated: 2025/10/22 16:13:08 by wipion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *d, const void *s, size_t n)
{
	size_t	i;

	i = 1;

	if(d == NULL && s == NULL)
		return (NULL);
	while (i <= n)
	{
		*(char *)d = *(char *)s;
		d++;
		s++;
		i++;
	}
	d -= i - 1;
	return (d);
}
/*#include <stdio.h>
#include <string.h>
int	main()
{
	char	d[] = "bonjouri";
	char 	s[] = "ouiouiou";
	char	pidfj[] = "bonjour";
	char	s1[] = "ouiouioui";
	ft_memcpy(d, s, 9);
	memcpy(pidfj, s1, 8);

	printf("%s\n", d);
	//printf("%s\n", pidfj);


}*/
