/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmoura-p <cmoura-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/16 19:35:25 by Claudia M P       #+#    #+#             */
/*   Updated: 2023/10/20 18:31:17 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *strg, int p, size_t size)
{
	char		*string;

	if (strg == NULL)
		return (NULL);
	string = (void *)strg;
	while (size--)
	{
		if (*string == (char)p)
			return ((void *)string);
		string++;
	}
	return (NULL);
}
#include <stdio.h>
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
