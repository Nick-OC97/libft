/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: no-conne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:37:08 by no-conne          #+#    #+#             */
/*   Updated: 2019/05/22 12:03:04 by no-conne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	x;
	size_t	z;

	i = ft_strlen(dest);
	x = 0;
	z = i;
	z += ft_strlen(src);
	if (n > i)
	{
		while (i < (n - 1) && src[x] != '\0')
		{
			dest[i] = src[x];
			i++;
			x++;
		}
		dest[i] = '\0';
	}
	else
	{
		z = ft_strlen(src) + n;
	}
	return (z);
}
