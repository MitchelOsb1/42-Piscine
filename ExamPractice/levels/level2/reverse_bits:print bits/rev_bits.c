/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_bits.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 18:45:53 by mosborne          #+#    #+#             */
/*   Updated: 2017/07/20 19:42:38 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

unsigned char	reverse_bits(unsigned char octet)
{
	int i;
	unsigned char res;

	i = 8;
	res = 0;
	while (i)
	{
		res = (res << 1) | (octet & 1);
		octet >>= 1;
		i--;
	}
	return (res);
}

void	printbits(unsigned char octet)
{
	int i;

	i = 0;
	while (i < 8)
	{
		if (octet >> i & 1)
			ft_putchar('1');
		else
			ft_putchar('0');
		i++;
	}
}

int	main()
{
	printbits(reverse_bits('c'));
	return (0);
}
