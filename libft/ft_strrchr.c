/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Claudia M Pickett <Claudia M Pickett@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:40:16 by Claudia M P       #+#    #+#             */
/*   Updated: 2023/10/09 19:54:36 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	find_c;
	char	*found_c;
	int		size;

	find_c = c;
	found_c = NULL;
	size = ft_strlen(s);
	if (c == '\0')
		return ((char *)s + size);
	while (*s)
	{
		if (*s == find_c)
			found_c = (char *) s;
		s++;
	}
	return ((char *)found_c);
}

/*#include <stdio.h>
#include "libft.h"

int main(void)
{
	char str[] = "Hello, world!";
	char *result = ft_strrchr(str, 'H');
	printf("Result: %s\n", result);
	return 0;
}
size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
*/