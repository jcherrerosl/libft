/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaherre <juaherre@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 08:42:13 by juaherre          #+#    #+#             */
/*   Updated: 2023/05/05 13:32:13 by juaherre         ###   ########.fr       */
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
