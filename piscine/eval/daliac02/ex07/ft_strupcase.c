/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linda-si <linda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 16:24:03 by linda-si          #+#    #+#             */
/*   Updated: 2023/08/02 14:57:13 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] + ('A' - 'a');
		}
		i++;
	}
	return (str);
}

#include <stdio.h>
int main (void)
{
	char str[] = "Yellow";
	char str1[] = "HEllo1";
	printf("%s\n", str);
	ft_strupcase(str);
	printf("%s\n", str);
	printf("%s\n", str1);
	ft_strupcase(str1);
	printf("%s", str1);
	return (0);
}
