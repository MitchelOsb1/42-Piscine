/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 17:06:49 by mosborne          #+#    #+#             */
/*   Updated: 2017/07/09 17:41:14 by mosborne         ###   ########.fr       */
/*                               qqqq                                            */
/* ************************************************************************** */

#include <unistd.h>

int		error_check(char **move);
char	chck_x(char c, unsigned char y, char **move);
char	chck_y(char c, unsigned char x, char **move);
char	chck_s(char c, unsigned char x, unsigned char y, char **move);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
	{
		ft_putchar(str[index]);
		index++;
	}
}

void	grid(char **move)
{
	int x;
	int y;

	y = 0;
	while (y < 9)
	{
		x = 0;
		while (x < 9)
		{
			ft_putchar(move[y][x]);
			if (x < 8)
				ft_putchar(' ');
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}

char	fill(char **move, int a)
{
	char			b;
	unsigned char	x;
	unsigned char	y;

	y = a / 9;
	x = a % 9;
	b = 1 + '0';
	if (a == 81)
		return (1);
	if (move[y][x] != '.')
		return (fill(move, a + 1));
	while (b < (10 + '0'))
	{
		if (chck_x(b, y, move) && chck_y(b, x, move) && chck_s(b, x, y, move))
		{
			move[y][x] = b;
			if (fill(move, a + 1))
				return (1);
		}
		b++;
	}
	move[y][x] = '.';
	return (0);
}
