/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngnguyen <ngnguyen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 14:00:01 by ngnguyen          #+#    #+#             */
/*   Updated: 2022/11/25 14:45:25 by ngnguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	start;
	size_t	end;

	if (s1 == (NULL))
		return (NULL);
	if (set == (NULL))
		return ((char *) s1);
	trim = 0;
	start = 0;
	end = ft_strlen(s1);
	if (s1 && set)
	{
		while (s1[start] && ft_strchr(set, s1[start]))
			start++;
		while (s1[end - 1] && ft_strchr(set, s1[end - 1]) && end > start)
			end--;
		trim = (char *)malloc(sizeof(char) * (end - start + 1));
		if (!trim)
			return (NULL);
		ft_strlcpy(trim, &s1[start], end - start + 1);
	}
	return (trim);
}
