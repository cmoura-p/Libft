/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmoura-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 16:32:19 by cmoura-p          #+#    #+#             */
/*   Updated: 2023/07/27 17:50:32 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	rush(int x, int y);
int	chartoint(char *str);

int	main(int argc, char **argv)
{
	if (argc > 1)
		rush(chartoint(argv[1]), chartoint(argv[2]));
	return (0);
}
