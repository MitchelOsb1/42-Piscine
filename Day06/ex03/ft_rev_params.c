/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 17:51:17 by mosborne          #+#    #+#             */
/*   Updated: 2017/07/05 18:17:47 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putchar(char c);

int	main(int argc, char **argv)
{
	char	*str;
	int		count;
	int		i;

	count = 0;
	i = argc - 1;
	while (i >= 1)
	{
		str = argv[i];
		while (str[count] != '\0')
		{
			ft_putchar(str[count]);
			count++;
		}
		count = 0;
		ft_putchar('\n');
		i--;
	}
	return (0);
}
