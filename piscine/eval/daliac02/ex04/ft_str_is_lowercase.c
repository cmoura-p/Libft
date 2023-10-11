/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linda-si <linda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 12:14:11 by linda-si          #+#    #+#             */
/*   Updated: 2023/08/02 14:48:34 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}
#include <unistd.h>
int main (void)
{
	char str[] = "";
	int result = ft_str_is_lowercase(str);
	if (result)
	{
		write (1, "1", 1);
	}
	else
	{
		write (1, "0", 1);
	}
	return (0);
}
