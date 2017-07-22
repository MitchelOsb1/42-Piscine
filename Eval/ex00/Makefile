#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mosborne <mosborne@student.42.us.org>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/16 21:30:41 by mosborne          #+#    #+#              #
#    Updated: 2017/07/16 21:37:42 by mosborne         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

SRCS= ft_functions.c eval_expr.c

HEADER= headers/ft_header.h

FLAGS= -Wall -Wextra -Werror

NAME= eval_expr

O= ft_functions.o eval_expr.o

all: $(NAME)

$(NAME):
	gcc $(FLAGS) -c $(SRCS) -I $(HEADER)
	gcc $(O) -o $(NAME)

clean:
	rm -f $(O)

fclean: clean
	rm -f $(NAME)

re: fclean all