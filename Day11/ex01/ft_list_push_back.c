/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 14:07:32 by mosborne          #+#    #+#             */
/*   Updated: 2017/07/12 19:23:09 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *cur;
	t_list *change;

	cur = *begin_list;
	change = ft_create_elem(data);
	if (cur)
	{
		while (cur->next != 0)
			cur = cur->next;
		cur->next = change;
	}
	else
		*begin_list = change;
}
