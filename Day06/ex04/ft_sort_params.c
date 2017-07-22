/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 17:57:39 by mosborne          #+#    #+#             */
/*   Updated: 2017/07/05 18:18:31 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

int	main(int argc, char **argv)
{
	char	*str;
	int		count;
	int		i;

	while (i < argc)
	{
		str = argv[i];
		while (str[count] != '\0')
		{
			ft_putchar(str[count]);
			count++;
		}
		count = 0;
		ft_putchar('\n');
		i++;
	}
	return (0);
}
