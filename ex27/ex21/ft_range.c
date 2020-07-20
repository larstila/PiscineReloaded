/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: larstila <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/03 13:55:10 by larstila          #+#    #+#             */
/*   Updated: 2020/06/04 16:09:03 by larstila         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int len;
	int *ret;
	int	i;

	i = 0;
	len = max - min;
	if (min >= max)
		return (0);
	if (!(ret = malloc(sizeof(min) * len)))
		return (0);
	while (i < len)
	{
		ret[i] = min + i;
		i++;
	}
	return (ret);
}
