/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 21:34:11 by mosborne          #+#    #+#             */
/*   Updated: 2017/07/16 21:45:40 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_header.h"

int	ft_parse_nbr(char **pos)
{
	int	nbr;
	int	sign;

	nbr = 0;
	sign = 1;
	if ((*pos)[0] == '-')
	{
		if ((*pos)[0] == '-')
			sign = -1;
		*pos += 1;
	}
	if ((*pos)[0] == '(')
	{
		*pos += 1;
		nbr = ft_summands(pos);
		if ((*pos)[0] == ')')
			*pos += 1;
		return (sign * nbr);
	}
	while ('0' <= (*pos)[0] && (*pos)[0] <= '9')
	{
		nbr = (nbr * 10) + (*pos)[0] - '0';
		*pos += 1;
	}
	return (sign * nbr);
}

int	ft_summands(char **pos)
{
	int		num1;
	int		num2;
	char	op;

	num1 = ft_parse_nbr(pos);
	while ((*pos)[0] != '\0' && (*pos)[0] != ')')
	{
		op = (*pos)[0];
		*pos += 1;
		if (op == '+' || op == '-')
			num2 = ft_factors(pos);
		else
			num2 = ft_parse_nbr(pos);
		num1 = do_op(num1, num2, op);
	}
	return (num1);
}

int	ft_factors(char **pos)
{
	int		num1;
	int		num2;
	char	op;

	num1 = ft_parse_nbr(pos);
	while ((*pos)[0] == '*' || (*pos)[0] == '/' || (*pos)[0] == '%')
	{
		op = (*pos)[0];
		*pos += 1;
		num2 = ft_parse_nbr(pos);
		num1 = do_op(num1, num2, op);
	}
	return (num1);
}

int	eval_expr(char *str)
{
	str = elim_spaces(str);
	if (str[0] == '\0')
		return (0);
	return (ft_summands(&str));
}

int	main(int ac, char **av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}
