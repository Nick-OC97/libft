/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: no-conne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 11:13:37 by no-conne          #+#    #+#             */
/*   Updated: 2019/05/30 11:50:02 by no-conne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	size_t				i;
	unsigned char		*adest;
	const unsigned char	*asrc;

	i = 0;
	adest = dest;
	asrc = src;
	while (i < n)
	{
		adest[i] = asrc[i];
		if (asrc[i] == (unsigned char)c)
			return (dest + i + 1);
		i++;
	}
	return (NULL);
}
