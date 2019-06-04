/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: no-conne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 14:56:08 by no-conne          #+#    #+#             */
/*   Updated: 2019/06/04 11:46:31 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t i;

	i = 0;
	while (str1[i] != '\0' && str2[i] != '\0' && i < n && str1[i] == str2[i])
	{
		i++;
	}
	if (n == 0 || i == n)
		return (0);
	if (!str1 || !str2)
		return (0);
	if (str1[i] == str2[i])
		return (0);
	else
		return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
