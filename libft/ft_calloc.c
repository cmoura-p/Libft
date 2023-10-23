/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/17 18:49:16 by Claudia M P       #+#    #+#             */
/*   Updated: 2023/10/22 01:23:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = (char *) malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero (ptr, nmemb * size);
	return (ptr);
}

/*void	*ft_memset(void *dest, int p, size_t size);
void	ft_bzero(void *b, size_t len);

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int main(void)
{
	int *arr;
	int i;

	arr = (int *)ft_calloc(5, sizeof(int));
	if (arr == NULL)
	{
		printf("Memory allocation failed\n");
		return (1);
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
	free(arr);
	return (0);
}

void	ft_bzero(void *b, size_t len)
{
	ft_memset(b, '\0', len);
}

void	*ft_memset(void *dest, int p, size_t size)
{
	size_t			i;
	unsigned char	*memo;

	i = 0;
	memo = (unsigned char *)dest;
	while (i < size)
		memo[i++] = p;
	return (memo);
}
*/