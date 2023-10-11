/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: linda-si <linda-si@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 15:14:02 by linda-si          #+#    #+#             */
/*   Updated: 2023/08/02 14:55:18 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
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
	char str = 10;
	int result = ft_str_is_printable(&str);
	if (result)
	{
		write (1,"1", 1);
	}
	else
	{
		write (1,"0",1);
	}
	return (0);
}
