/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 18:53:31 by mosborne          #+#    #+#             */
/*   Updated: 2017/07/04 21:56:05 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int count;
	int sign;
	int i;
	int res;

	res = 0;
	count = 0;
	sign = 1;
	i = 0;
	while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n')
				|| (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
		i++;
	if (str[i] == 45)
	{
		sign = -1;
		i++;
	}
	if (str[i] == 43)
		i++;
	while (str[i] - 48 > 0 && str[i] - 48 < 9)
	{
		res = (10 * res) + (str[i] - 48);
		i++;
	}
	return (res *= sign);
}
