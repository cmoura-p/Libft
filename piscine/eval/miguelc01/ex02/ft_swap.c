/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 17:20:45 by mloureir          #+#    #+#             */
/*   Updated: 2023/07/29 16:09:30 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void ft_swap(int *a, int *b);

int main(void)
{
	int a = 97;
	int b = 100000;
	printf("A:%d \nB:%d\n\n\n", a, b);
	ft_swap(&a, &b);
	printf("A:%d \nB:%d\n\n\n", a, b);
	return (0);
}
void	ft_swap(int *a, int *b)
{
	int	btemp;

	btemp = *b;
	*b = *a;
	*a = btemp;
}
