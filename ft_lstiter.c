/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaherre <juaherre@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/25 08:49:29 by juaherre          #+#    #+#             */
/*   Updated: 2023/03/25 08:52:19 by juaherre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *list, void (*f)(void *))
{
	t_list	*aux;

	aux = NULL;
	while (list != NULL)
	{
		aux = list;
		list = aux->next;
		if (f)
		{
			f(aux->content);
		}
	}
}
