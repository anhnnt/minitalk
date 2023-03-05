/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngnguyen <ngnguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 11:18:54 by ngnguyen          #+#    #+#             */
/*   Updated: 2022/11/25 14:43:29 by ngnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*dest1;
	const char	*s;

	dest1 = (char *)dest;
	s = (const char *)src;
	if (!dest && !s)
		return (NULL);
	while (n--)
		*dest1++ = *s++;
	return (dest);
}
