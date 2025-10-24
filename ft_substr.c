#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*subs;
	int	i;
	int	j;

	i = 0;
	j = 0;

	subs = malloc(sizeof(char) * len);
	if(!subs)
		return(NULL);
	while (s[i] != start && s[i])
		i++;
	while (i < len && s[i])
	{
		subs[j] == s[i];
		i++;
		j++;
	}
	return (subs);
}
