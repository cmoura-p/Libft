/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Claudia M Pickett <Claudia M Pickett@st    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:27:24 by Claudia M P       #+#    #+#             */
/*   Updated: 2023/10/26 20:09:32 by Claudia M P      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Allocates (with malloc(3)) and returns a new node.
The member variable ’content’ is initialized with
the value of the parameter ’content’. The variable
’next’ is initialized to NULL.
*/
t_list *ft_lstnew(void *content)
{
	t_list	*newelement;

	newelement = (t_list *) malloc(sizeof(t_list));
	if (!newelement)
		return (NULL);
	newelement->content = content;
	newelemen->next = NULL;
	return (newelement);
}
/*
quero esclarecer o nome content
*/