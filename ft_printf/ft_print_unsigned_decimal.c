/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_decimal.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngnguyen <ngnguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:07:25 by ngnguyen          #+#    #+#             */
/*   Updated: 2022/12/02 15:28:12 by ngnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

static void	ft_putnbr_uint(unsigned int n)
{
	if (n >= 0 && n < 10)
		ft_putchar_fd(n + 48, 1);
	else
	{
		ft_putnbr_fd(n / 10, 1);
		ft_putnbr_fd(n % 10, 1);
	}
}

int	ft_print_unsigned_decimal(unsigned int n)
{
	int	leng;

	leng = int_leng(n);
	ft_putnbr_uint(n);
	return (leng);
}
