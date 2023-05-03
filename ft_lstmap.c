/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaherre <juaherre@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 08:55:07 by juaherre          #+#    #+#             */
/*   Updated: 2023/03/28 20:39:30 by juaherre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *list, void (*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*aux;

	if (!list)
		return (NULL);
	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	while (list != NULL)
	{
		aux = list;
		list = aux->next;
		if (f)
			f(aux->content);
		new = aux;
		if (del)
			del(aux);
		free(aux);
	}
	return (new);
}
