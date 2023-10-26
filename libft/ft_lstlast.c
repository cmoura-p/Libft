/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Claudia M Pickett <Claudia M Pickett@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:31:08 by Claudia M P       #+#    #+#             */
/*   Updated: 2023/10/26 20:00:46 by Claudia M P      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Returns the last node of the list.
*/
t_list *ft_lstlast(t_list *lst)
{
	t_list	*lastnode;

	if (!lst)
		return (NULL);
	lastnode = lst;
	while (lastnode)
		lastnode = lastnode->next;
	return (lastnode);
}