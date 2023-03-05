/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngnguyen <ngnguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:22:08 by ngnguyen          #+#    #+#             */
/*   Updated: 2022/11/25 14:40:08 by ngnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_atoi_aux(long int is_minus)
{
	if (is_minus > 0)
		return (-1);
	return (0);
}

int	ft_atoi(const char *str)
{
	int			i;
	long int	res;
	long int	is_minus;

	res = 0;
	i = 0;
	is_minus = 1;
	while (str[i] == 32 || (str[i] <= 13 && str[i] >= 9))
		i++;
	while ((str[i] == 45 || str[i] == 43) && str[i + 1] > 47 && str[i + 1] < 58)
	{
		if (str[i] == 45)
			is_minus = -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		res = res * 10 + str[i] - 48;
		i++;
	}
	if (res < 0)
		return (ft_atoi_aux(is_minus));
	return ((int)(res * is_minus));
}
