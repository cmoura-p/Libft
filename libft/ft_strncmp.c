/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmoura-p <cmoura-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 20:21:37 by cmoura-p          #+#    #+#             */
/*   Updated: 2023/10/20 21:12:12 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// compara os ponteiros *s1 com *s2 nos primeiros n caracteres
// retorna um inteiro 0 se for ok
// retorna um menor ou maior que de pendendendo da diferenca

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] != '\0' && i < n) && (s1[i] == s2[i]))
	{
		i++;
	}
	if (i == n)
		i--;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
#include <stdio.h>
#include "libft.h"

int main(void)
{
	char *s2 = "Hello, world!";
	char *s1 = "Hello, there!";
	int n = 15;

	int result = ft_strncmp(s1, s2, n);

	if (result == 0)
		printf("The first %d characters of \"%s\" and \"%s\" are the same.\n", n, s1, s2);
	else if (result < 0)
		printf("The first %d characters of \"%s\" are less than the first %d characters of \"%s\".\n", n, s1, n, s2);
	else
		printf("The first %d characters of \"%s\" are greater than the first %d characters of \"%s\".\n", n, s1, n, s2);

	return 0;
}
