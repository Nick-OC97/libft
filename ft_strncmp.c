/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: no-conne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 14:56:08 by no-conne          #+#    #+#             */
/*   Updated: 2019/05/24 15:07:01 by no-conne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t i;

	i = 0;
	while (str1[i] != '\0' && str2[i] != '\0' && i < n)
	{
		if (str1[i] < str2[i])
			return (-1);
		if (str1[i] > str2[i])
			return (1);
		i++;
	}
	if (n == 0)
		return (0);
	if (str1[i] == '\0' && str2[i] == '\0')
		return (0);
	if (str1[i] == '\0' && str2[i] != '\0')
		return (-1);
	if (str2[i] == '\0' && str1[i] != '\0')
		return (1);
	return (0);
}
