/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/05 14:04:03 by mosborne          #+#    #+#             */
/*   Updated: 2017/07/06 15:38:02 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		x;
	char	*p;

	x = 0;
	while (src[x] != '\0')
		x++;
	p = (char*)malloc(sizeof(*src) * (x + 1));
	x = 0;
	while (src[x] != '\0')
	{
		p[x] = src[x];
		x++;
	}
	p[x] = '\0';
	return (p);
}
