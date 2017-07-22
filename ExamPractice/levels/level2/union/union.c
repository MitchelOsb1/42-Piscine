/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 20:33:04 by mosborne          #+#    #+#             */
/*   Updated: 2017/07/20 20:59:16 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	check	(char *str, char a)
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

void	unon(char *str, char *str)
{
	
}

int	main(int argc, char **argv)
{
	if (argc ==2)
		unon(argv[1], argv[2]);
	ft_putchar('\n');
	return (0);
}
