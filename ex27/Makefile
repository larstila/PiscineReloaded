#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: larstila <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/03 16:49:33 by larstila          #+#    #+#              #
#    Updated: 2020/06/04 16:25:00 by larstila         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = display_file

all:
	gcc -c main.c
	gcc -Wall -Wextra -Werror main.o -o ft_display_file 

clean:
	rm -f main.o

fclean: clean
	rm -f ft_display_file

re: fclean all