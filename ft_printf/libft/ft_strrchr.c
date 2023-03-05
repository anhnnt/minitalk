/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngnguyen <ngnguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:22:37 by ngnguyen          #+#    #+#             */
/*   Updated: 2022/11/25 15:30:04 by ngnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = ft_strlen(str) - 1;
	if (c == '\0')
		return ((char *)(str + i + 1));
	while (i >= 0)
	{
		if (((unsigned char *)str)[i] == (unsigned char)c)
			return ((char *)&str[i]);
		i--;
	}
	return (0);
}
