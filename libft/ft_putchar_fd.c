/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmoura-p <cmoura-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 17:35:41 by cmoura-p          #+#    #+#             */
/*   Updated: 2023/10/20 20:16:25 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int main(void) 
{
 	char character = '6';
    // Escreve o caractere 'A' na saída padrão (stdout)
    ft_putchar_fd(character, STDOUT_FILENO);

    // Escreve o caractere 'B' na saída de erro padrão (stderr)
    ft_putchar_fd('C', STDERR_FILENO);
}
