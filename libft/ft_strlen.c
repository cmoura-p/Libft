/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 19:25:51 by cmoura-p          #+#    #+#             */
/*   Updated: 2023/10/22 01:44:46 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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

/*#include <stdio.h>
#include "libft.h"

int main(void)
{
	char *str = "Hello, BIG world!";
	size_t len = ft_strlen(str);
	printf("Length of '%s' is %zu\n", str, len);
	return 0;
}
*/