/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 12:30:45 by lvichi            #+#    #+#             */
/*   Updated: 2023/07/29 15:27:34 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	str_1[] = "Rose is red, the violet's blue";
	char	str_comb[255];
	int	str_len = 0;

	ft_strcpy(str_comb, str_1);
	while (str_comb[str_len] != '\0')
		str_len++;
	write(1, str_comb, str_len);
	return (0);
}
