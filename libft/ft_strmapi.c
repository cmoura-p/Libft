/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 22:06:07 by cmoura-p          #+#    #+#             */
/*   Updated: 2023/10/22 01:45:52 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*new_s;

	if (!s || !f)
		return (NULL);
	i = 0;
	new_s = (char *) malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!new_s)
		return (NULL);
	while (s[i])
	{
		new_s[i] = f(i, s[i]);
		i++;
	}
	new_s[i] = '\0';
	return (new_s);
}

/*#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

int	main(void)
{
	char const	*s = "KIKI ja esta BOA!!!";
	char		*new_s;

	new_s = ft_strmapi(s, ft_mapping);
	printf("Original string: %s\n", s);
	printf("New string: %s\n", new_s);
	free(new_s);
	return (0);
}

char	ft_mapping (unsigned int index, char c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	return (c);
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