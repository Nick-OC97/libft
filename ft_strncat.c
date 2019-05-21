/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: no-conne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 09:37:08 by no-conne          #+#    #+#             */
/*   Updated: 2019/05/21 10:56:02 by no-conne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t i;
	size_t x;

	i = ft_strlen(dest);
	x = 0;
	while (x <= n)
	{
		while (src && x < n)
		{
			dest[i] = src[x];
			i++;
			x++;
		}
		dest[i] = '\0';
		i++;
		x++;
	}
	return (dest);
}
