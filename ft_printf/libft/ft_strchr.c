/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngnguyen <ngnguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 10:53:03 by ngnguyen          #+#    #+#             */
/*   Updated: 2022/11/30 12:56:24 by ngnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*temp;
	char	character;

	temp = (char *)str;
	character = (char)c;
	while (1)
	{
		if (*temp == character)
			return (temp);
		if (*temp == 0)
			return (NULL);
		temp++;
	}
}
