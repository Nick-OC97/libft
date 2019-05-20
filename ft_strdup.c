/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: no-conne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 11:38:47 by no-conne          #+#    #+#             */
/*   Updated: 2019/05/20 15:49:56 by no-conne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(char *str)
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
