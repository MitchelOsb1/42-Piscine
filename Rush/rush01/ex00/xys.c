/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   xys.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 17:08:35 by mosborne          #+#    #+#             */
/*   Updated: 2017/07/09 17:23:27 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str);

char	chck_x(char c, unsigned char y, char **move)
{
	unsigned char x;

	x = 0;
	while (x < 9)
	{
		if (move[y][x] == c)
			return (0);
		x++;
	}
	return (1);
}

char	chck_y(char c, unsigned char x, char **move)
{
	unsigned char y;

	y = 0;
	while (y < 9)
	{
		if (move[y][x] == c)
			return (0);
		y++;
	}
	return (1);
}

char	chck_s(char c, unsigned char x, unsigned char y, char **move)
{
	unsigned char a;
	unsigned char b;

	a = x - (x % 3);
	b = y - (y % 3);
	x = a;
	y = b;
	while (y < b + 3)
	{
		while (x < a + 3)
		{
			if (move[y][x] == c)
				return (0);
			x++;
		}
		x = a;
		y++;
	}
	return (1);
}

int		check_error(char **move)
{
	int a;
	int b;

	a = 0;
	b = 0;
	while (a < 9)
	{
		if (ft_strlen(move[a]) != 9)
			return (0);
		while (b < 9)
		{
			if ((move[a][b] < '0' || move[a][b] > '9') && move[a][b] != '.')
				return (0);
			b++;
		}
		b = 0;
		a++;
	}
	return (a);
}
