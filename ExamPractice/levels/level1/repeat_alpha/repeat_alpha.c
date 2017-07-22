/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 16:20:58 by mosborne          #+#    #+#             */
/*   Updated: 2017/07/20 12:02:57 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	alpha(char *str)
{
	int set;
	int i;

	i = 0;
	while (str[i])
	{
		if (i >= 'A' && i <= 'Z')
			set = str[i] - 96;
		else if (i >= 'a' && i <= 'z')
			set = str[i] - 64;
		while (set > 0)
		{
			ft_putchar(str[i]);
			set--;
		}
		set = 0;
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		alpha(argv[1]);
	ft_putchar('\n');
	return (0);
}
