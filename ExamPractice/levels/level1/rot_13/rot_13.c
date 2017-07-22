/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/20 11:46:14 by mosborne          #+#    #+#             */
/*   Updated: 2017/07/20 12:20:17 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rot_13(char *str);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{
	if (argc != 2)
		ft_putchar('\n');
	else
		rot_13(argv[1]);
	return(0);
}

void	rot_13(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] <= 'M' && str[i] >= 'A')
			ft_putchar(str[i] + 13);
		else if (str[i] <= 'Z' && str[i] >= 'N')
			ft_putchar(str[i] - 13);
        else if (str[i] <= 'm' && str[i] >= 'a')
            ft_putchar(str[i] + 13);
        else if (str[i] <= 'z' && str[i] >= 'n')
            ft_putchar(str[i] - 13);
		else
			ft_putchar(str[i]);
		i++;
	}
	ft_putchar('\n');
}
