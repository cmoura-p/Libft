/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.48porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 13:04:53 by lvichi            #+#    #+#             */
/*   Updated: 2023/07/29 14:01:06 by lvichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/*#include <stdio.h>*/

void	print_hex(char dec)
{
	char	temp1;
	char	temp2;

	write(1, "\\", 1);
	temp1 = (dec % 16) + 48;
	dec = dec / 16;
	temp2 = (dec % 16) + 48;
	write(1, &temp2, 1);
	if (temp1 >= 58)
		temp1 = temp1 + 39;
	write(1, &temp1, 1);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 32 && str[i] <= 126)
			write(1, &str[i], 1);
		else
		{
			print_hex(str[i]);
		}
		i++;
	}
}

/*int	main(void)
{
	char	str[] = "Coucou\ntu vas bien ?";

	ft_putstr_non_printable(str);
	return (0);
}*/
