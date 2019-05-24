/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: no-conne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:10:59 by no-conne          #+#    #+#             */
/*   Updated: 2019/05/24 10:44:32 by no-conne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char	*p;

	p = (char*)str;
	while (*str != '\0' && str)
	{
		if (*str == c)
		{
			*p = *str;
			return (p);
		}
		str++;
		p++;
	}
	if (*str == '\0' && c == '\0')
	{
		*p = *str;
		return (p);
	}
	return (NULL);
}
