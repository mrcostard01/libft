/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wipion <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 19:24:43 by wipion            #+#    #+#             */
/*   Updated: 2025/10/14 19:31:25 by wipion           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
 typedef unsigned long int size_t;
 int	ft_atoi(char *str);
 void	*ft_bzero(void *s, size_t n);
 int	ft_isascii(int c);
 void	*ft_memchr(const void *s, int c, size_t n);
 void	*ft_memcpy(void *d, const void *s, size_t n);
 void	*ft_memmove(void *d, const void *s, size_t n);
 void	*ft_memset(void *s, unsigned int c, size_t n);
 char	*ft_strchr(char *str, char to_find);
 char	*ft_strdup(const char *s);
 int	ft_isalpha(int c);
 int	ft_isnumeric(int c);
 int	ft_isprint(int c);
 unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
 unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);
 int	ft_strlen(char *str);
 int	ft_strncmp(char *s1, char *s2, unsigned int n);
 char	*ft_strnstr(const char *big, const char *little, size_t len);
 char	*ft_strrchr(char *str, char to_find);
 int	ft_tolower(int c);
 int	ft_toupper(int c);
 void	*ft_memcmp(const void *s1, const void *s2, size_t n);
 int	ft_isalnum(int c);
#endif
