/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Claudia M Pickett <Claudia M Pickett@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 15:36:04 by Claudia M P       #+#    #+#             */
/*   Updated: 2023/10/09 15:36:04 by Claudia M P      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	find_c;

	find_c = c;
	while (*s != find_c)
	{
		if (*s == '\0')
			return (NULL);
		s++;
	}
	return ((char *)s);
}

/*#include <stdio.h>
#include "libft.h"

int main(void)
{
	char *str = "Hello, world!";
	char *ptr;

	ptr = ft_strchr(str, 'w');
	if (ptr != NULL)
		printf("Found character 'w' at position: %ld\n", ptr - str);
	else
		printf("Character 'w' not found.\n");

	ptr = ft_strchr(str, 'z');
	if (ptr != NULL)
		printf("Found character 'z' at position: %ld\n", ptr - str);
	else
		printf("Character 'z' not found.\n");

	return 0;
}
*/