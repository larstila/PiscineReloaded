/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larstila <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/03 11:14:38 by larstila          #+#    #+#             */
/*   Updated: 2020/06/04 16:43:28 by larstila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int ret;

	ret = 1;
	if (nb < 0 || nb > 12)
	{
		return (0);
	}
	if (nb == 0)
		return (1);
	if (nb == 1)
		return (1);
	ret = nb * ft_recursive_factorial(nb - 1);
	return (ret);
}
