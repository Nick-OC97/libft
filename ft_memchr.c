/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: no-conne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 13:03:00 by no-conne          #+#    #+#             */
/*   Updated: 2019/05/23 14:19:19 by no-conne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t		i;
	size_t		z;
	const void	*astr;
	void		*ans;

	i = 0;
	z = 0;
	astr = str;
	ans = NULL;
	while (i < n)
	{
		if (*(int*)astr == c || *(char*)astr == c)
		{
			ans = (void*)astr;
			return (ans);
		}
		i++;
		astr++;
	}
	return (ans);
}
