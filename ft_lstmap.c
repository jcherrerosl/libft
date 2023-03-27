/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaherre <juaherre@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 08:55:07 by juaherre          #+#    #+#             */
/*   Updated: 2023/03/27 18:49:10 by juaherre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*aux;

	if (!lst)
		return (NULL);
	new = ft_lstnew(f(lst->content));
	while (lst->next != NULL)
	{
		lst = lst->next;
		aux = ft_lstnew(f(lst->content));
		if (!aux)
		{
			ft_lstdelone(new, del);
			return (NULL);
		}
		ft_lstadd_back(&new, aux);
	}
	return (new);
}
