/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: no-conne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 07:35:28 by no-conne          #+#    #+#             */
/*   Updated: 2019/05/24 08:33:08 by no-conne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *str1, const void *str2, size_t n)
{
	size_t				i;
	unsigned const char	*c;
	unsigned const char	*d;

	i = 0;
	c = str1;
	d = str2;
	while (i < n)
	{
		if (c[i] < d[i])
			return (-1);
		if (c[i] > d[i])
			return (1);
		if (c[i] == d[i])
			i++;
	}
	return (0);
}
