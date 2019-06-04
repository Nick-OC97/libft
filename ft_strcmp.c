/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: no-conne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/24 14:09:28 by no-conne          #+#    #+#             */
/*   Updated: 2019/06/04 10:45:29 by event            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strcmp(const char *str1, const char *str2)
{
	size_t i;

	i = 0;
	while ((str1[i] != '\0' && str2[i] != '\0') && (str1[i] == str2[i]))
		i++;
	if (str1[i] == str2[i])
		return (0);
	else
		return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
