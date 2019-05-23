/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: no-conne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 12:15:27 by no-conne          #+#    #+#             */
/*   Updated: 2019/05/23 13:01:02 by no-conne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *str1, const void *str2, size_t n)
{
	size_t				i;
	unsigned char		*astr1;
	const unsigned char	*astr2;

	i = n;
	astr1 = str1;
	astr2 = str2;
	if (astr2 < astr1)
	{
		while (i--)
		{
			astr1[i] = astr2[i];
		}
	}
	else
		ft_memcpy(str1, str2, n);
	return (astr1);
}
