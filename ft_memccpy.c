/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: no-conne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 11:13:37 by no-conne          #+#    #+#             */
/*   Updated: 2019/05/23 12:11:46 by no-conne         ###   ########.fr       */
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
	while (i < n && *asrc != c)
	{
		*adest = *asrc;
		adest++;
		asrc++;
		i++;
	}
	if (*asrc == c)
	{
		*adest = *asrc;
		adest++;
		return (adest);
	}
	return (NULL);
}
