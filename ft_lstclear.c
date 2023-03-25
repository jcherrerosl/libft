/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaherre <juaherre@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 08:42:13 by juaherre          #+#    #+#             */
/*   Updated: 2023/03/25 08:48:20 by juaherre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **list, void (*del)(void *))
{
	t_list	*aux;

	aux = NULL;
	while (*list != NULL)
	{
		aux = *list;
		*list = aux->next;
		if (del)
			del(aux->content);
		free(aux);
	}
}
