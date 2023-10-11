/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 11:36:56 by mloureir          #+#    #+#             */
/*   Updated: 2023/07/29 16:16:34 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int main()
{
	int teste[98];
	int size = 98;
	int i = 0;
	
	while(i < size)
	{
		teste[i] = i;
		printf("[%d]", teste[i]);
		i++;
	}
	i = 0;
	printf("\n");
	ft_rev_int_tab(teste, size);
	i = 0;
	while(i < size)
	{
		printf("[%d]", teste[i]);
		i++;
	}
	printf("\n");
	return (0);
}
void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;
	int	curr;

	temp = 0;
	i = 0;
	while (i < size / 2)
	{
		curr = size - i - 1;
		temp = tab[i];
		tab[i] = tab[curr];
		tab[curr] = temp;
		i++;
	}
}
