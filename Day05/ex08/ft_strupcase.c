/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 19:44:27 by mosborne          #+#    #+#             */
/*   Updated: 2017/07/04 20:09:22 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int index;

	index = 0;
	while (str[index])
	{
		if ((str[index] >= 97 && str[index] <= 122))
		{
			str[index] = str[index] - 32;
		}
		index++;
	}
	return (str);
}
