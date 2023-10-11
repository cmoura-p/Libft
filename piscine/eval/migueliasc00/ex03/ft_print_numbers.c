/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melias-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 17:46:01 by melias-l          #+#    #+#             */
/*   Updated: 2023/07/22 17:57:25 by melias-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(int i);

int main(void)
{
	int i = 0;

	while(i <= 9)
	{
		ft_putchar('0' + i);
		i++;
	}

		return(0);

}

void 	ft_putchar(int i)
{
	write(1, &i, 1);
}
