/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linda-si <linda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 14:16:09 by linda-si          #+#    #+#             */
/*   Updated: 2023/08/02 14:49:41 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 65 && str[i] <= 90)
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
	char str[] = "BAMBORA";
	int result = ft_str_is_uppercase(str);
	if (result)
	{
		write(1,"1", 1);
	}
	else
	{
		write(1, "0", 1);
	}
	return (0);
}
