/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/12 22:10:15 by mosborne          #+#    #+#             */
/*   Updated: 2017/07/13 22:51:33 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putstr(char *str)
{
	int		i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		main(int argc, char **argv)
{
	int		fd;
	char	buf[BUF_SIZE + 1];

	if (argc != 2)
	{
		if (argc < 2)
			ft_putstr("File Name Missing\n");
		if (argc > 2)
			ft_putstr("Too many arguments\n");
	}
	fd = open(argv[1], O_RDONLY);
	if (fd != '\0')
	{
		read(fd, buf, BUF_SIZE);
		ft_putstr(buf);
	}
	close(fd);
	return (0);
}
