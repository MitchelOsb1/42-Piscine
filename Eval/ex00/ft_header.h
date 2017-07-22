/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_header.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mosborne <mosborne@student.42.us.org>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/16 21:32:17 by mosborne          #+#    #+#             */
/*   Updated: 2017/07/16 21:39:55 by mosborne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_HEADER_H
# define FT_HEADER_H

# include <unistd.h>
# include <stdlib.h>

void	ft_putchar(char c);
int		ft_strlen(char *str);
void	ft_putnbr(int nbr);
int		do_op(int num1, int num2, char op);
char	*elim_spaces(char *str);
int		ft_parse_nbr(char **pos);
int		ft_summands(char **pos);
int		ft_factors(char **pos);
int		eval_expr(char *str);

#endif
