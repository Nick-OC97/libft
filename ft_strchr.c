/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: no-conne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:10:59 by no-conne          #+#    #+#             */
/*   Updated: 2019/05/30 12:19:18 by no-conne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*p;
	int		i;

	i = 0;
	p = (char*)str;
	while (p[i] != '\0' && str)
	{
		if (p[i] == c)
			return ((char *)str + i);
		i++;
	}
	if (p[i] == '\0' && c == '\0')
		return ((char *)str + i);
	return (NULL);
}
