/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 14:24:45 by mosborne          #+#    #+#             */
/*   Updated: 2017/07/20 14:31:44 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rotone(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'Z' || str[i] == 'z')
			ft_putchar(str[i] - 25);
		else if (str[i] >= 'A' && str[i] < 'Z')
			ft_putchar(str[i] + 1);
		else if (str[i] >= 'a' && str[i] < 'z')
			ft_putchar(str[i] + 1);
		else
			ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rotone(argv[1]);
	ft_putchar('\n');
	return (0);
}
