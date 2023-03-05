/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngnguyen <ngnguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 15:59:10 by ngnguyen          #+#    #+#             */
/*   Updated: 2022/11/25 14:42:34 by ngnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	int_leng(long nb)
{
	size_t	total;

	total = 0;
	if (nb == 0)
		total = 1;
	if (nb < 0)
	{
		nb = -nb;
		total++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		total++;
	}
	return (total);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nb;
	size_t	i;
	size_t	leng;

	nb = n;
	i = 0;
	leng = int_leng(nb);
	str = (char *)malloc(sizeof(char) * leng + 1);
	if (!str)
		return (NULL);
	str[leng] = '\0';
	if (nb < 0)
	{
		*str = '-';
		nb = -nb;
		++i;
	}
	while (leng-- > i)
	{
		str[leng] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}
