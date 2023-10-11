/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmoura-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 19:37:37 by cmoura-p          #+#    #+#             */
/*   Updated: 2023/07/20 20:12:03 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void    ft_print_comb(void)
{
        char    dig1a;
        char    dig2a;
	char	dig1b;
	char	dig2b;
 
        dig1a = '0';
        while (dig1a <= '9')
        {
		dig2a = '0';
		dig1b = '0';
		dig2b = '0';
                while (dig2a <= '9')
                {
			write(1, &dig1a, 1);
                        write(1, &dig2a, 1);
                        write(1, " ", 1);
			write(1, &dig1b, 1);
			write(1, &dig2b, 1);
			write(1, ", ",2);
			dig2b++;
                        while (dig2b <= '9')
			{
				write(1, &dig1a, 1);
				write(1, &dig2a, 1);
				write(1, " ",1);
				write(1, &dig1b, 1);
				write(1, &dig2b, 1);
				write(1, ", ", 2);
				dig2b++;
			}
			dig2a++;
		}
                dig1a++;                
        }
}

int     main(void)
{
        ft_print_comb();

}


