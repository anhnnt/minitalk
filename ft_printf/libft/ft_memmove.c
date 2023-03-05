/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngnguyen <ngnguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:43:58 by ngnguyen          #+#    #+#             */
/*   Updated: 2022/11/30 12:56:30 by ngnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*dest1;
	const char	*s;

	dest1 = (char *)dest;
	s = (const char *)src;
	if (!dest && !s)
		return (NULL);
	if (dest1 <= s)
		ft_memcpy(dest1, s, n);
	else
	{
		while (n--)
			*(dest1 + n) = *(s + n);
	}
	return (dest);
}
