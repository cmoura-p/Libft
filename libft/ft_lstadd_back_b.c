/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_b.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Claudia M Pickett <Claudia M Pickett@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:31:52 by Claudia M P       #+#    #+#             */
/*   Updated: 2023/10/29 13:49:53 by cmoura-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*lstaux;

	if (!lst || !new)
		return ;
	if (*lst)
	{
		lstaux = ft_lstlast(*lst);
		lstaux -> next = new;
	}
	else
		*lst = new;
}
