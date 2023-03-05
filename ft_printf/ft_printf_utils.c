/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngnguyen <ngnguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:09:42 by ngnguyen          #+#    #+#             */
/*   Updated: 2022/12/02 16:10:08 by ngnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	int_leng(long nb)
{
	int	total;

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
