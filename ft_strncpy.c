/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: no-conne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 08:22:18 by no-conne          #+#    #+#             */
/*   Updated: 2019/05/21 16:09:32 by no-conne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	size_t i;

	i = -1;
	if (!(src))
		return (NULL);
	while (++i < n)
	{
		if (*(src + i))
			*(dest + i) = *(src + i);
		else
		{
			while (i < n)
				*(dest + i++) = '\0';
		}
	}
	return (dest);
}
