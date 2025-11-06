#include "libft.h"

int ft_lenarr2d(char *tab, char c)
{
    int	i;
    int	len;

    i = 0;
    len = 0;
    while (tab[i] != '\0')
    {
        if (tab[i] == c)
        {
            len++;
            while (tab[i] == c)
                i++;
        }
        else
            i++;
    }
    return (len);
}