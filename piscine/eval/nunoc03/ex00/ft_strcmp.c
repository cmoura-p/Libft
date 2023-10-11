/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nalves-p <nalves-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 07:28:02 by nalves-p          #+#    #+#             */
/*   Updated: 2023/07/27 14:30:23 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int main(void)
{
    char str1[] = "MAtador";
    char str2[] = "Matador";

    printf("Or: %d\n", strcmp(str1, str2));
	printf("My: %d\n", ft_strcmp(str1, str2));
    
	//ft_strcmp é usada para comparar as strings str1 e str2
    return 0;
}
