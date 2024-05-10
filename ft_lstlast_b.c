/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Claudia M Pickett <Claudia M Pickett@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:31:08 by Claudia M P       #+#    #+#             */
/*   Updated: 2024/05/10 18:36:31 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst -> next;
	return (lst);
}
