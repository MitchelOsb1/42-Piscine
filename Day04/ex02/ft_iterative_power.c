/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 15:45:56 by mosborne          #+#    #+#             */
/*   Updated: 2017/07/01 20:28:05 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int x;
	int y;

	x = nb;
	y = power;
	if (y < 0)
		return (0);
	if (y == 0)
		return (1);
	if (x == 0)
		return (x);
	while (y > 1)
	{
		y--;
		nb *= x;
	}
	return (nb);
}
