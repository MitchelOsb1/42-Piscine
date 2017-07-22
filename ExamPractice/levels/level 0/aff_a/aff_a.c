/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 15:36:31 by mosborne          #+#    #+#             */
/*   Updated: 2017/07/18 15:51:04 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	int i;

	i = 0;
	if (argc != 2)
	{
		ft_putchar('a');
		ft_putchar('\n');
	}
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] == 'a')
				ft_putchar('a');
			i++;
		}
        if (argv[1][i] != 'a')
            ft_putchar('\n');
	}
	return (0);
}
