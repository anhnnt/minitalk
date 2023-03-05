/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_string.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngnguyen <ngnguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 15:42:34 by ngnguyen          #+#    #+#             */
/*   Updated: 2022/12/02 14:27:39 by ngnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_printf.h"

int	ft_print_string(char *str)
{
	int	len;

	len = 0;
	if (!str)
	{
		write (1, "(null)", 6);
		return (6);
	}
	while (*str)
	{
		ft_putchar_fd(*str, 1);
		str++;
		len++;
	}
	return (len);
}
