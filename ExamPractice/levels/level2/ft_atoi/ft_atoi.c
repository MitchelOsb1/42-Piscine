/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 14:33:55 by mosborne          #+#    #+#             */
/*   Updated: 2017/07/20 15:07:08 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *str)
{
	int i;
	int num;
	int sign;

	i = 0;
	sign = 1;
	num = 0;
	while (str[i] < '0' || str[i] > '9')
	{
		if (str[i] == '-' && sign != -1)
			sign = -1;
		else if (sign == -1)
			return (0);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	return (num * sign);
}

int	main()
{
	printf("%d", ft_atoi(" adasdasdsd -12223asdasdasdsad"));
	return(0);
}
