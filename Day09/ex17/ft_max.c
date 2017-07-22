/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_max.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 11:33:35 by mosborne          #+#    #+#             */
/*   Updated: 2017/07/07 12:41:45 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_max(int *tab, int length)
{
	int min;
	int i;

	if (length == 0)
		return (0);
	i = 0;
	min = tab[i];
	while (i < length)
	{
		while (min > tab[i])
		{
			min[i] = tab[i];
			i++;
		}
	}
	return (min);
}
