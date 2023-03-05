/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_vpointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngnguyen <ngnguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 17:00:37 by ngnguyen          #+#    #+#             */
/*   Updated: 2022/12/02 16:11:08 by ngnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

static int	pointer_hex_leng(uintptr_t num)
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

static void	print_pointer(uintptr_t num)
{
	if (num >= 0 && num < 10)
		ft_putchar_fd(num + 48, 1);
	if (num >= 10 && num < 16)
		ft_putchar_fd(num + 97 - 10, 1);
	if (num >= 16)
	{
		print_pointer(num / 16);
		print_pointer(num % 16);
	}
}

int	ft_print_vpointer(unsigned long long num)
{
	ft_print_string("0x");
	if (!num)
	{
		ft_print_integer(0);
		return (3);
	}
	else
		print_pointer(num);
	return (2 + pointer_hex_leng(num));
}
