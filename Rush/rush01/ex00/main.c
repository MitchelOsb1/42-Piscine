/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 17:02:14 by mosborne          #+#    #+#             */
/*   Updated: 2017/07/09 17:32:05 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);
char	fill(char **move, int a);
char	grid(char **move);
int		check_error(char **move);

int		main(int argc, char **argv)
{
	if (argc == 10)
	{
		if (check_error(&argv[1]))
		{
			fill(&argv[1], 0);
			grid(&argv[1]);
		}
		else
			ft_putstr("Error\n");
	}
	else
		ft_putstr("Error\n");
	return (0);
}
