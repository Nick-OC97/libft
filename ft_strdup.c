/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: no-conne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 11:38:47 by no-conne          #+#    #+#             */
/*   Updated: 2019/05/21 11:17:46 by no-conne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	int		i;
	char	*new;

	i = 0;
	new = (char *)malloc(ft_strlen(str) + 1);
	while (str[i])
	{
		new[i] = str[i];
		i++;
	}
	return (new);
}
