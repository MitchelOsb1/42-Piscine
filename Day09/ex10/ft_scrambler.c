/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_scrambler.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 03:32:42 by mosborne          #+#    #+#             */
/*   Updated: 2017/07/07 03:56:58 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
	int tempa;
	int tempb;
	int tempc;
	int tempd;

	tempa = ***a;
	*******c = tempa;
	tempc = *******c;
	****d = tempc;
	tempd = ****d;
	*b = tempd;
	tempb = *b;
	***a = tempb;
}
