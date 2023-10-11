/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chartoint.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmoura-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 12:53:38 by cmoura-p          #+#    #+#             */
/*   Updated: 2023/07/28 11:42:28 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

/* 
 * funcao que testa a validade dos caracteres 
 * passados no string se sao numeros 
 * 
*/
int	check_str(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 48 || str[i] > 57)
		{
			return(1);
		}
		i++;
	}
	return(result);
}

/* 
 * funcao que muda um char para um int 
 *
*/
int	chartoint(char *str)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	if (!str || str[i] == '-')
		return(0);

	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			res = res * 10 + str[i] - '0';
		else
			return (0);
		i++;
	}
	return (res);
}

/* funcao principal que recebe os parametros no prompt */
int	main(int argc, char **argv)
{
	int	x;
	int	y;
	
	x = chartoint(argv[1]);
	y = chartoint(argv[2]);
	rush(x, y);
	return (0);
}
