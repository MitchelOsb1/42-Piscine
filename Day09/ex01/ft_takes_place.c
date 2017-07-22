/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/06 18:43:05 by mosborne          #+#    #+#             */
/*   Updated: 2017/07/06 19:32:47 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int h;

	h = hour;
	if (hour >= 12)
		h = hour % 12;
	if (hour == 0 || hour == 12)
		h = 12;
	printf("%s", "THE FOLLOWING TAKES PLACE BETWEEN ");
	if (hour == 0)
		printf("12.00 A.M. AND 1.00 A.M.\n");
	else if (hour == 12)
		printf("12.00 P.M. AND 1.00 P.M.\n");
	else if (hour < 11)
		printf("%d.00 A.M. AND %d.00 A.M.\n", h, h + 1);
	else if (hour == 11)
		printf("11.00 A.M AND 12.00 P.M.\n");
	else if (hour < 23)
		printf("%d.00 P.M. AND %d.00 P.M.\n", h, (h + 1) % 12);
	else if (hour == 24)
		printf("12.00 A.M. AND 1.00 A.M.\n");
	else if (hour == 23)
		printf("11.00 P.M AND 12.00 A.M\n");
}
