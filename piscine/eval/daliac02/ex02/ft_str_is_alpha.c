/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linda-si <linda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 10:23:34 by linda-si          #+#    #+#             */
/*   Updated: 2023/08/02 14:43:42 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] > 64 && str[i] < 91) || (str[i] > 96 && str[i] < 123))
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
#include <stdio.h>
int main(void)
{
	char str[] = "12345clskljg";
	int result = ft_str_is_alpha(str);
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
