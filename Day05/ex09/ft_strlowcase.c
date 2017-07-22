/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 19:44:52 by mosborne          #+#    #+#             */
/*   Updated: 2017/07/04 20:09:51 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int index;

	index = 0;
	while (str[index])
	{
		if ((str[index] >= 65 && str[index] <= 90))
		{
			str[index] = str[index] + 32;
		}
		index++;
	}
	return (str);
}
