#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: larstila <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/03 15:11:35 by larstila          #+#    #+#              #
#    Updated: 2020/06/03 16:23:50 by larstila         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft
SRC = /srcs/ft_putchar.c /srcs/ft_putstr.c /srcs/ft_strcmp.c /srcs/ft_strlen.c /srcs/ft_swap.c
OBJECTS = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o
FLAGS = -Wall -Wextra -Werror
HEADERS = includes/*.h

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rcs libft.a $(OBJECTS)

ft_putchar.o: srcs/ft_putchar.c $(HEADERS)
	gcc $(FLAGS) -c srcs/ft_putchar.c

ft_putstr.o: srcs/ft_putstr.c $(HEADERS)
	gcc $(FLAGS) -c srcs/ft_putstr.c

ft_strcmp.o: srcs/ft_strcmp.c $(HEADERS)
	gcc $(FLAGS) -c srcs/ft_strcmp.c

ft_strlen.o: srcs/ft_strlen.c $(HEADERS)
	gcc $(FLAGS) -c srcs/ft_strlen.c

ft_swap.o: srcs/ft_swap.c $(HEADERS)
	gcc $(FLAGS) -c srcs/ft_swap.c

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all