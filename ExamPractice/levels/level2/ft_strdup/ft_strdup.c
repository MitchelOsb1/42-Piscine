/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 15:10:58 by mosborne          #+#    #+#             */
/*   Updated: 2017/07/20 15:17:45 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int x;
	char *p;

	x = 0;
	while (src[x])
		x++;
	p = malloc(sizeof(char) * x);
	x = 0;
	while (src)
	{
		p[x] = src[x];
		x++;
	}
	return (p);
}
