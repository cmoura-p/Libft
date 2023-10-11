/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: melias-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 17:11:06 by melias-l          #+#    #+#             */
/*   Updated: 2023/07/25 16:33:31 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar(char i);

int main(void)
{
	ft_putchar();
	
	return(0);

}

void 	ft_putchar(char i)
{
	char i = 'a';
	while (i <= 'z')
	{
		write(1, &i, 1);
		i++
	}
}
