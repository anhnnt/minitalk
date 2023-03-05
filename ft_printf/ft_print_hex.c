/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngnguyen <ngnguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 16:16:51 by ngnguyen          #+#    #+#             */
/*   Updated: 2022/12/02 16:11:34 by ngnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

static int	hex_leng(unsigned int num)
{
	int	leng;

	leng = 0;
	if (num == 0)
		leng = 1;
	while (num > 0)
	{
		num = num / 16;
		leng++;
	}
	return (leng);
}

int	ft_print_hex(unsigned int i, char ch)
{
	int	len;

	len = hex_leng(i);
	if (i >= 0 && i < 10)
		ft_putchar_fd(i + 48, 1);
	if (i >= 10 && i < 16)
	{
		if (ch == 'x')
			ft_putchar_fd(i + 97 - 10, 1);
		else if (ch == 'X')
			ft_putchar_fd(i + 65 - 10, 1);
	}
	if (i >= 16)
	{
		ft_print_hex(i / 16, ch);
		ft_print_hex(i % 16, ch);
	}
	return (len);
}
