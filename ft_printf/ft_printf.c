/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngnguyen <ngnguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 17:24:12 by ngnguyen          #+#    #+#             */
/*   Updated: 2022/12/02 15:24:21 by ngnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	ft_printf(const char *string, ...)
{
	va_list	vl;
	int		i;
	int		count;

	va_start (vl, string);
	count = 0;
	i = 0;
	while (string[i])
	{
		if (string[i] == '%')
		{
			count += ft_handle(vl, string[i + 1]);
			i++;
		}
		else
			count += ft_print_char(string[i]);
		i++;
	}
	va_end (vl);
	return (count);
}
