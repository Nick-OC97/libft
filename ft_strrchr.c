/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: no-conne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 10:52:03 by no-conne          #+#    #+#             */
/*   Updated: 2019/05/30 12:26:42 by no-conne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		i;
	char	*p;

	i = 0;
	p = (char *)str;
	while (str[i] != '\0')
	{
		i++;
		p++;
	}
	while (i >= 0)
	{
		if (str[i] == c)
			return ((char *)str + i);
		i--;
		p--;
	}
	if (*str == '\0' && c == '\0')
	{
		return ((char *)str);
	}
	return (NULL);
}
