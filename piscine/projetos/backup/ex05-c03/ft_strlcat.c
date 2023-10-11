/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmoura-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/03 11:07:35 by cmoura-p          #+#    #+#             */
/*   Updated: 2023/08/03 12:09:16 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/*
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{}
*/

#include <string.h>

int	main(int argc, char **argv)
{
	unsigned int	n;

	n = 12;
	if (argc > 1)
	{
		snprintf("STRLCPY do sistema %d\n", strlcat(argv[1], argv[2], n));
	}
	else
		printf("Sem parametros passados");
	return (0);
}
