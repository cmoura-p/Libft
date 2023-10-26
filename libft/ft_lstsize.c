/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Claudia M Pickett <Claudia M Pickett@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:29:57 by Claudia M P       #+#    #+#             */
/*   Updated: 2023/10/26 20:08:43 by Claudia M P      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Counts the number of nodes in a list.
*/
int ft_lstsize(t_list *lst)
{
	int		nodenum;		
	t_list	*lstaux;

	nodenum = 0;
	ltsaux = lst;
	while (lstaux)
	{
		nodenum++;
		lstaux = lstaux->next;
	}
	return (nodenum);
}

/*
porque criar uma lista auxiliar em lugar de corrr a lista passada?
*/