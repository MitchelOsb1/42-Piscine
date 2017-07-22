/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_replace.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/19 18:19:24 by mosborne          #+#    #+#             */
/*   Updated: 2017/07/19 18:50:05 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
void	searchreplace(char *str, char *ser, char *rep)
{
	int i;

	i = 0;
	if (ser[1] != '\0')
		return (ft_putchar('\n'));
	if (rep[1] != '\0')
		return (ft_putchar('\n'));
	while (str[i])
	{
		if (ser[0] == str[i])
			ft_putchar(*rep);
		else
			ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	char *str;
	char *ser;
	char *rep;

	str = argv[1];
	ser = argv[2];
	rep = argv[3];
	if (argc != 4)
		ft_putchar('\n');
	if (argc == 4)
		searchreplace(str, ser, rep);
	return (0);
}
