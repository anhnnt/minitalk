/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngnguyen <ngnguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 15:23:58 by ngnguyen          #+#    #+#             */
/*   Updated: 2022/12/02 15:24:16 by ngnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	ft_handle(va_list vl, char ch)
{
	int	num;

	num = 0;
	if (ch == 'c')
		num += ft_print_char(va_arg(vl, int));
	else if (ch == 's')
		num += ft_print_string(va_arg(vl, char *));
	else if (ch == 'p')
		num += ft_print_vpointer(va_arg(vl, unsigned long long));
	else if (ch == 'd' || ch == 'i')
		num += ft_print_integer(va_arg(vl, int));
	else if (ch == 'u')
		num += ft_print_unsigned_decimal(va_arg(vl, unsigned int));
	else if (ch == 'x' || ch == 'X')
		num += ft_print_hex(va_arg(vl, unsigned int), ch);
	else if (ch == '%')
		num += ft_print_char('%');
	else
		num += ft_print_char(ch);
	return (num);
}
