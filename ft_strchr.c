/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: no-conne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 11:10:59 by no-conne          #+#    #+#             */
/*   Updated: 2019/05/22 10:09:10 by no-conne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int i;
	char *x;

	x = NULL;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == (char)c)
		{
			*x = str[i];
			return (x);
		}
		i++;
	}
	return (NULL);
}


