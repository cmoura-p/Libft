/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Claudia M Pickett <Claudia M Pickett@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:35:41 by cmoura-p          #+#    #+#             */
/*   Updated: 2023/11/01 21:30:44 by Claudia M P      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchr_fd(char c, int fd)
{
	if (fd < 0)
		return ;
	write(fd, &c, 1);
}

/*#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) 
{
 	char character = '6';
    // Escreve o caractere 'A' na saída padrão (stdout)
    ft_putchar_fd(character, STDOUT_FILENO);

    // Escreve o caractere 'B' na saída de erro parão (stderr)
    ft_putchar_fd('C', STDERR_FILENO);
}
*/