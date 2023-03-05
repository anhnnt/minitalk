/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngnguyen <ngnguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:28:08 by ngnguyen          #+#    #+#             */
/*   Updated: 2022/11/25 14:44:12 by ngnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcpy(char *dest, const char *src)
{
	int		i;
	char	*temp;

	temp = (char *)src;
	i = 0;
	while (temp[i] != '\0')
	{
		dest[i] = temp[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(const char *src)
{
	char	*des;

	des = (char *) malloc(sizeof(*src) * (ft_strlen(src) + 1));
	if (des == NULL)
		return (NULL);
	des = ft_strcpy(des, (char *)src);
	return (des);
}
