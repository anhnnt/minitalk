/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngnguyen <ngnguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:24:46 by ngnguyen          #+#    #+#             */
/*   Updated: 2022/11/25 14:54:59 by ngnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*array;
	size_t	count;

	if (nitems < 0 || size < 0)
		return (NULL);
	count = nitems * size;
	if (count / nitems != size)
		return (NULL);
	array = malloc(count);
	if (array == NULL)
		return (NULL);
	ft_bzero(array, count);
	return (array);
}
