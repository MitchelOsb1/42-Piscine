/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 19:24:23 by mosborne          #+#    #+#             */
/*   Updated: 2017/07/12 20:19:24 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*new;
	t_list	*current;
	int		i;

	i = 1;
	current = 0;
	while (i < ac)
	{
		new = ft_create_elem(av[i]);
		new->next = current;
		current = new;
		i++;
	}
	return (current);
}
