/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsouza-o <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 15:23:40 by nsouza-o          #+#    #+#             */
/*   Updated: 2023/07/23 21:09:43 by lde-camp         ###   ########.fr       */
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
			if (pl == 1 && pc == 1)
				ft_putchar ('A');
			else if (pl == y && pc == x && pl != 1 && pc != 1)
				ft_putchar ('A');
			else if ((pl == y && pc == 1) || (pc == x && pl == 1))
				ft_putchar ('C');
			else if ((pc == 1 || pc == x) || (pl == 1 || pl == y))
				ft_putchar ('B');
			else
				ft_putchar (' ');
			pc++;
		}
		ft_putchar ('\n');
		pl++;
	}
}
