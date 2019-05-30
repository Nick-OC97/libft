/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: no-conne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 13:03:00 by no-conne          #+#    #+#             */
/*   Updated: 2019/05/30 12:00:42 by no-conne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t		i;

	i = 0;
	while (i < n)
	{
		if (((const char *)str)[i] == (const char)c)
			return ((void *)str + i);
		i++;
	}
	return (0);
}
