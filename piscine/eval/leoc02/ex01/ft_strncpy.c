/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 13:32:15 by lvichi            #+#    #+#             */
/*   Updated: 2023/07/29 15:38:06 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char*src, unsigned int n)
{
	int	i;
	unsigned int	i_n;

	i = 0;
	i_n = 0;
	while (i_n < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
		i_n++;

	}
	dest[i] = '\0';
	while (n > 0)
	{
		dest[i] = '\0';
		i++;
		n--;
	}
	return (dest);
}

int	main(void)
{
	char	str_1[] = "This line rules!";
	char	str_2[255];
	int	str_len = 0;

	ft_strncpy(str_2, str_1, 5);
	while (str_2[str_len] != '\0')
		str_len++;
	write(1, str_2, str_len);
}
