/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: no-conne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 10:46:20 by no-conne          #+#    #+#             */
/*   Updated: 2019/05/30 11:51:15 by no-conne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	size_t				i;
	unsigned char		*astr1;
	unsigned const char	*astr2;

	i = 0;
	if (!str1 && !str2)
		return (NULL);
	astr1 = str1;
	astr2 = str2;
	while (i < n)
	{
		astr1[i] = astr2[i];
		i++;
	}
	return (str1);
}
