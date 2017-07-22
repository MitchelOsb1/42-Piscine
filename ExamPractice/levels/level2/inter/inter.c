/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 15:18:00 by mosborne          #+#    #+#             */
/*   Updated: 2017/07/20 17:06:32 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		check(char *str, char a)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == a)
			return (0);
		i++;
	}
	return (1);
}

void	inter(char *str, char *str1)
{
	int i;
	int x;
	int j;
	char temp[2048];

	i = 0;
	j = 0;
	while (str[i])
	{
		x = 0;
		while (str1[x])
		{
			if (str[i] == str[x] && check(temp, str[i]))
				{
					ft_putchar(str[i]);
					temp[j] = str[i];
					j++;
				}
			x++;
		}
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}
