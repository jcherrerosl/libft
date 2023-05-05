/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: juaherre <juaherre@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 17:46:36 by juaherre          #+#    #+#             */
/*   Updated: 2023/05/05 13:18:52 by juaherre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **list, t_list *new)
{
	t_list	*tmp;

	if (list)
	{
		if (*list == NULL)
			*list = new;
		else
		{
			tmp = ft_lstlast(*list);
			tmp->next = new;
		}
	}
}
