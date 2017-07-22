/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/04 10:47:03 by mosborne          #+#    #+#             */
/*   Updated: 2017/07/04 20:39:49 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char	x;
	int		i;
	int		f;

	f = n;
	i = 0;
	while (src[i] != '\0' && i != f)
	{
		x = src[i];
		dest[i] = x;
		i++;
	}
	while (i < f)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
