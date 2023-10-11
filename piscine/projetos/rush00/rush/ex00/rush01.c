/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 15:23:40 by nsouza-o          #+#    #+#             */
/*   Updated: 2023/07/23 21:18:39 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	pc;
	int	pl;

	pl = 1;
	while (pl <= y && x > 0)
	{
		pc = 1;
		while (pc <= x)
		{
			if ((pc == 1 && pl == 1))
				ft_putchar ('/');
			else if ((pc == x && pl == y) && x != 1 && y != 1)
				ft_putchar ('/');
			else if ((pc == x && pl == 1) || (pc == 1 && pl == y))
				ft_putchar ('\\');
			else if ((pc == 1 || pc == x) || (pl == 1 || pl == y))
				ft_putchar ('*');
			else
				ft_putchar (' ');
			pc++;
		}
		ft_putchar ('\n');
		pl++;
	}
}
