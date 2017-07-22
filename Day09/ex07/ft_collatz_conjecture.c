/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 00:24:15 by mosborne          #+#    #+#             */
/*   Updated: 2017/07/07 01:21:06 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base == 1)
		return (0);
	else if (base > 1)
	{
		if (base % 2 != 0)
			return (1 + ft_collatz_conjecture(base * 3 + 1));
		else
			return (1 + ft_collatz_conjecture(base / 2));
	}
	return (0);
}
