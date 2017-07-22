#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mosborne <mosborne@student.42.us.org>      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/07/10 18:06:13 by mosborne          #+#    #+#              #
#    Updated: 2017/07/10 18:54:55 by mosborne         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

SRCS = srcs/ft_putchar.c srcs/ft_swap.c srcs/ft_putstr.c srcs/ft_strlen.c srcs/ft_strcmp.c

HEADER = includes/

FLAGS = -c -Wall -Wextra -Werror

NAME = libft.a

CC = gcc

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) $(SRCS) -I$(HEADER)
	ar rc $(NAME) ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
	ar -t $(NAME)
clean:
	rm -f ft_putchar.o ft_putstr.o ft_strlen.o ft_swap.o ft_strcmp.o
fclean: clean
	rm -f $(NAME)
re: fclean all