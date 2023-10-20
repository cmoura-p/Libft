/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/20 11:34:28 by marvin            #+#    #+#             */
/*   Updated: 2023/10/20 11:34:28 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
int main(void) 
{
 	/* ft_putsrt_fd ft_putendle_fd ft_putnbr_fd */
	char *message = "Hello, World!";
    
    // Escreve a mensagem na saída padrão (stdout)
    ft_putendl_fd(message, STDOUT_FILENO);

    // Escreve a mensagem na saída de erro padrão (stderr)
    ft_putstr_fd(message, STDERR_FILENO);

	// Escreve o número na saída de erro padrão (stderr)
    ft_putnbr_fd(-0, STDERR_FILENO); */

