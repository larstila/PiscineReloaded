
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larstila <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/03 08:52:53 by larstila          #+#    #+#             */
/*   Updated: 2020/06/08 08:54:00 by larstila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_abs.h" 
#include <stdio.h>

//void	ft_is_negative(int n);
//void	ft_ft(int *nbr);
//void	ft_swap(int *a, int *b);
//int	ft_iterative_factorial(int nb);
//int	ft_recursive_factorial(int nb);
int		ft_sqrt(int nb);
//void	ft_putstr(char *str);
//int	ft_strlen(char *len);
//int 	ft_strcmp(char *s1, char *s2);
//char	*ft_strdup(char *src);
//int		*ft_range(int min, int max);
//int	ft_count_if(char **tab, int (*f)(char*));
//void ft_foreach(int *tab, int length, void(*f)(int));

void ft_putnbr(int i)
{
	printf("%d,", i);
}

void	ft_putchar(char c) 
{
	write(1, &c, 1);
	return ;
}

int	ft_leila(char *str) 
{
	if (str[0] == 'l')
		return (1);
	return (0);
}

int main(void)
{
	int n;
	int m;
	int *ptr1;
	int *ptr2;
	
	n = 3;
	m = 5;
	ptr1 = &n;
	ptr2 = &m;
	//ft_ft(ptr1);
	//ft_swap(ptr1, ptr2);
	//printf("%d, %d", n, m);
//	ft_is_negative(1);

	// **** ex12***
//	printf("%d,", ft_iterative_factorial(-8));
	
	// *** ex13 ****
	//printf("%d", ft_recursive_factorial(-1));
	
	// **** ex14 *****

	printf("%d,", ft_sqrt(2147483647));
	printf("%d,", ft_sqrt(123454321));
	printf("%d,", ft_sqrt(-8));
	printf("%d,", ft_sqrt(2147395600));


	// ******** ex15 ******
	
//	ft_putstr("hello world");
	
// ******* ex16 ******
//	printf("%d", ft_strlen("hello"));

//***** ex17 *****
//	printf("%d", ft_strcmp("aaa","aaa"));

// **** ex20 ****

	//printf("%s", ft_strdup("hello"));

// ****  ex21  *****

//	int i = 0;
//  int *range = ft_range(6,10);
//	if (range == 0)
//		printf("its null");
//	else 
//	{
//		while (i < 4)
//		{
//			printf("%d,", range[i]);
//			i++;
//		}
//	}

// ********* ex22 *********
	
//	int abs = ABS(-3);
//	printf("%d", abs);

// ****** ex25 ********

//	int nmb[] = {1,3,4,5};
//	ft_foreach(nmb, 4, ft_putnbr);

// ***** ex26 ******
	//char *str[] = {"lei", "la", "moi", 0};
	//printf("%d", ft_count_if(str, ft_leila));

	return 1;
}
