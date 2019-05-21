/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: no-conne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 13:46:06 by no-conne          #+#    #+#             */
/*   Updated: 2019/05/21 14:08:41 by no-conne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	char *y;
	char *n;
	size_t i;
	size_t j;

	n = NULL;
	y = NULL;
	i = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		if (haystack[i] == needle[j])
		{
			*y = needle[j];
		}
		while (haystack[i] == needle[j] && haystack[i] != '\0' && needle[j] != '\0')
		{
			if (j == ft_strlen(needle))
				return (y);
			i++;
			j++;
		}
		i++;
	}
	return (n);
}
