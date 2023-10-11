/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mloureir <mloureir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/23 11:11:46 by mloureir          #+#    #+#             */
/*   Updated: 2023/07/29 16:15:51 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str);

int main()
{
	int cont = 0;
	char teste[] = "ABCDE12345632521536724187633265";
	cont = ft_strlen(teste);
	printf("Tamanho da string: %d", cont);
	return (0);
}
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i); 
}
