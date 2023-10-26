/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Claudia M Pickett <Claudia M Pickett@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:35:25 by Claudia M P       #+#    #+#             */
/*   Updated: 2023/10/26 15:22:10 by Claudia M P      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *strg, int p, size_t size)
{
	char		*string;

	string = (void *)strg;
	while (size--)
	{
		if (*string == (char)p)
			return ((void *)string);
		string++;
	}
	return (NULL);
}

/*#include <stdio.h>
#include <string.h>
#include "libft.h"

int main(void)
{
	char str[] = "Hello, world!";
	char *result = ft_memchr(str, 'x', strlen(str));
	if (result != NULL)
		printf("Found 'w' at position %ld\n", result - str);
	else
		printf("Did not find character\n");
	return 0;
}
*/