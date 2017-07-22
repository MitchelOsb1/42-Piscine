/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_compact.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/07 05:24:29 by mosborne          #+#    #+#             */
/*   Updated: 2017/07/07 06:50:01 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_compact(char **tab, int length)
{
	int		i;
	int		j;
	char	**tmp;

	i = 0;
	j = 0;
	tmp = 0;
	while (i < length)
	{
		while (tab[j] != '\0')
		{
			tab[j] = tmp[i];
			i++;
			j++;
		}
		i++;
	}
	tab[j] = tmp[i];
	return (0);
}
