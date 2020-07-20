/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larstila <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/03 16:49:22 by larstila          #+#    #+#             */
/*   Updated: 2020/06/08 08:43:17 by larstila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define BUF_SIZE 10
#include <fcntl.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
	return ;
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i++]);
	}
	return ;
}

void	ft_display_file(char *name)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE];

	if (-1 == (fd = open(name, O_RDONLY)))
	{
		write(2, "open error\n", 11);
		return ;
	}
	while ((ret = read(fd, buf, BUF_SIZE - 1)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	if (-1 == close(fd))
	{
		write(2, "close error\n", 12);
	}
}

int		main(int argc, char **argv)
{
	if (argc == 1)
	{
		write(2, "File name missing.\n", 19);
		return (0);
	}
	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (0);
	}
	ft_display_file(argv[1]);
	return (0);
}
