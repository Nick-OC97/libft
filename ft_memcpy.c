/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: no-conne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 10:46:20 by no-conne          #+#    #+#             */
/*   Updated: 2019/05/23 11:11:41 by no-conne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *str1, const void *str2, size_t n)
{
	size_t				i;
	unsigned char		*astr1;
	unsigned const char	*astr2;

	i = 0;
	astr1 = str1;
	astr2 = str2;
	while (i < n)
	{
		*astr1 = *astr2;
		i++;
		astr1++;
		astr2++;
	}
	return (str1);
}
