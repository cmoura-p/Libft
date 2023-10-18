/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Claudia M Pickett <Claudia M Pickett@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 17:43:59 by Claudia M P       #+#    #+#             */
/*   Updated: 2023/10/18 18:45:07 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char		*s3;
	int			ini;
	int			fim;
	int			size;

	if (!s1 || !set)
		return (NULL);
	ini = 0;
	fim = ft_strlen(s1) - 1;
	while (s1[ini] == set)
		ini++;
	while (s1[fim] == set)
		fim--;
	size = fim - ini + 1;
	*s3 = (char *)malloc(size + 1);
	if (!s3)
		return (NULL);
	ft_strlcpy(s3, s1 + ini, size);
	return (s3);
}
