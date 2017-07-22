/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/02 11:26:28 by mosborne          #+#    #+#             */
/*   Updated: 2017/07/02 22:23:11 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

int	row_x(int x)
{
	int row;

	row = x - 1;
	while ((row + 1 >= 1) && (row < x))
	{
		if (x == row + 1)
			ft_putchar('/');
		if ((row + 1 != x) && (row > 0) && (row != 0))
			ft_putchar('*');
		row--;
		if ((0 == row) && (x != 1))
			ft_putchar('\\');
	}
	if (x != 0)
		ft_putchar('\n');
	return (0);
}

int	row_b(int x)
{
	int row;

	row = x - 1;
	while ((row + 1 >= 1) && (row < x))
	{
		if (x == row + 1)
			ft_putchar('\\');
		if ((row + 1 != x) && (row > 0) && (row != 0))
			ft_putchar('*');
		row--;
		if ((0 == row) && (x != 1))
			ft_putchar('/');
	}
	if (x != 0)
		ft_putchar('\n');
	return (0);
}

int	centr_r(int x)
{
	int col;

	col = x - 1;
	while ((col + 1 >= 1) && (col < x) && (col >= 0))
	{
		if (x == col + 1)
			ft_putchar('*');
		if ((col + 1 != x) && (col > 0) && (col != 0))
			ft_putchar(' ');
		if ((0 == col) && (x != 1))
			ft_putchar('*');
		col--;
	}
	if (x != 0)
		ft_putchar('\n');
	return (0);
}

int	rush01(int x, int y)
{
	int height;

	height = y - 1;
	row_x(x);
	while ((height < y) && (height > 1))
	{
		centr_r(x);
		height--;
	}
	if (y > 1)
		row_b(x);
	return (0);
}
