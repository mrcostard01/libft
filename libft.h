/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wipion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 19:24:43 by wipion            #+#    #+#             */
/*   Updated: 2025/10/22 14:21:29 by wipion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdlib.h>

int		ft_atoi(const char *str);
void		ft_bzero(void *s, size_t n);
int		ft_isascii(int c);
int		ft_isdigit(int c);
void	*ft_memchr(const void *s, int c, size_t n);
void	*ft_memcpy(void *d, const void *s, size_t n);
void	*ft_memmove(void *d, const void *s, size_t n);
void	*ft_memset(void *s, unsigned int c, size_t n);
void	*ft_calloc(size_t nmemb, size_t size);
char	*ft_strchr(const char *str, int to_find);
char	*ft_strdup(const char *s);
int		ft_isalpha(int c);
int		ft_isnumeric(int c);
int		ft_isprint(int c);
size_t	ft_strlcat(char *dest, const char *src, unsigned int size);
size_t	ft_strlcpy(char *dest, char *src, unsigned int size);
int		ft_strlen(const char *str);
int		ft_strncmp(char *s1, char *s2, unsigned int n);
char	*ft_strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(const char *str, int to_find);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_isalnum(int c);
#endif
