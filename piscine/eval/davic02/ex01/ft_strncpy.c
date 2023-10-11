/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmeirele <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 19:41:44 by dmeirele          #+#    #+#             */
/*   Updated: 2023/07/31 14:10:12 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n) && (src[i] != '\0'))
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

#include<stdio.h>
#include<string.h>
int	main()
{	
	char srcArray[] = "source array copy";
	char destArray[17];
	
	printf("SRC Array: %s\n",srcArray);
	ft_strncpy(destArray,srcArray,10);

	printf("DEST Array after call function: %s\n",destArray);
	printf("DEST Array after call function: %s\n",strncpy(destArray,srcArray,10));
}

