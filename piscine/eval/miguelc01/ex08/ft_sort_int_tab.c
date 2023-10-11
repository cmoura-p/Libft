/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/29 14:39:38 by mloureir          #+#    #+#             */
/*   Updated: 2023/07/29 16:17:59 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int main()
{
	int num[] = {13,-32,32,2,32,78,90,-456456,-456,59,4343,22,22,35,91,32};
	int size = 15;
	int i = 0;
	while(i < size)
	{
		printf("[%d]", num[i]);
		i++;
	}
	printf("\n");
	i = 0;
	ft_sort_int_tab(num, size);
	while(i < size)
	{
		printf("[%d]", num[i]);
		i++;
	}
	return (0);
}
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
}
