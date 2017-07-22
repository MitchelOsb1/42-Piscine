/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.us>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/29 13:43:24 by mosborne          #+#    #+#             */
/*   Updated: 2017/06/29 14:18:11 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_comb(void)
{
	int a;
	int b;
	int c;

	a = -1;
	while (a < 7)
	{
		b = a++ + 1;
		while (b < 8)
		{
			c = ++b + 1;
			while (c < 10)
			{
				ft_putchar(a + '0');
				ft_putchar(b + '0');
				ft_putchar(c + '0');
				ft_putchar(',');
				ft_putchar(' ');
				c++;
			}
		}
	}
	ft_putchar(8);
	ft_putchar(8);
}
