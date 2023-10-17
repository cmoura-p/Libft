/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Claudia M Pickett <Claudia M Pickett@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 19:30:40 by cmoura-p          #+#    #+#             */
/*   Updated: 2023/10/17 19:50:12 by Claudia M P      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H

# define LIBFT_H
# include <unistd.h>
# include <stdio.h>
# include <string.h>

int		ft_atoi(const char *str);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_memcmp(const void *s1, const void *s2, size_t size);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
char	*ft_strrchr(const char *s, int c);
char	*ft_strdup(const char *str);
void	*malloc(size_t size);
void	*ft_memset(void *dest, int p, size_t size);
void	*ft_memmove(void *dest, const void *src, size_t size);
void	*ft_memcpy(void *dest, const void *src, size_t size);
void	*ft_memchr(const void *strg, int p, size_t size);
void	ft_bzero(void *b, size_t len);
void	*ft_calloc(size_t nmemb, size_t size);
size_t	ft_strlcat(char *dest, const char *src, size_t finalsize);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *str);

#endif
