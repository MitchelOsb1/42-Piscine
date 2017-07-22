/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 21:37:07 by mosborne          #+#    #+#             */
/*   Updated: 2017/07/06 22:12:50 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if ('a' <= str[i] <= 'z')
		{
			if (str[i] >= 'k')
				str[i] -= 10;
			else
				str[i] -= 16;
		}
		i++;
	}
}

int	main()
{
	int c;

	c = 'Hello';
	printf("%s", *ft_rot42(c));
	return (0);
}
