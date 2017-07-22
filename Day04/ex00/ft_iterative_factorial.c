/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/30 13:26:06 by mosborne          #+#    #+#             */
/*   Updated: 2017/07/01 21:06:06 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int x;

	x = nb;
	if (x < 0)
		return (0);
	if (x == 0)
		return (1);
	if (x > 12)
		return (0);
	while (x > 1)
	{
		x--;
		nb *= x;
	}
	return (nb);
}
