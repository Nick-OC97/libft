/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: no-conne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:10:59 by no-conne          #+#    #+#             */
/*   Updated: 2019/05/21 12:30:31 by no-conne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int i;
	char *x;

	x = NULL;
	i = 0;
	while (str)
	{
		if (str[i] == c)
		{
			*x = str[i];
			return (x);
		}
		i++;
	}
	return (NULL);
}
