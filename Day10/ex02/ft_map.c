/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 21:13:39 by mosborne          #+#    #+#             */
/*   Updated: 2017/07/11 20:09:26 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int i;
	int *sort;

	i = 0;
	sort = (int*)malloc(sizeof(*tab) * (length));
	while (i < length)
	{
		sort[i] = f(tab[i]);
		i++;
	}
	return (sort);
}
