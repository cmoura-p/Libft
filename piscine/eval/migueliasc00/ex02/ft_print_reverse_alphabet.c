/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melias-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 17:40:21 by melias-l          #+#    #+#             */
/*   Updated: 2023/07/22 17:44:39 by melias-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char i);

int main(void)
{
		char i = 'z';

		while(i >= 'a')
		{
			ft_putchar(i);
			i--;
		}

			return(0);

}

void ft_putchar(char i)
{
	write(1, &i, 1);
}
