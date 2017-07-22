/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 15:59:48 by mosborne          #+#    #+#             */
/*   Updated: 2017/07/04 16:52:31 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

int	main(int argc, char **argv)
{
	char *str;

	argc = 0;
	str = argv[0];
	while (str[argc] != '\0')
	{
		ft_putchar(str[argc]);
		argc++;
	}
	ft_putchar('\n');
	return (0);
}
