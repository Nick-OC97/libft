/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: no-conne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 12:30:26 by no-conne          #+#    #+#             */
/*   Updated: 2019/05/27 13:46:11 by no-conne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**sizer(int i, char c, char const *s)
{
	int		cnt;
	char	**new;

	cnt = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c)
			cnt++;
		i++;
	}
	if (!(new = (char **)malloc(sizeof(char *) * cnt + 1)))
		return (NULL);
	return (new);
}

static int	checker(int i, char c)
{
	while (i != c)
		i++;
	return (i - 1);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		n;
	int		x;
	char	**new;

	i = 0;
	x = 0;
	new = sizer(i, c, s);
	i = 0;
	while (s[i] != '\0')
	{
		n = i;
		if (s[i] == c && s[i + 1] != c)
		{
			n++;
			checker(n, c);
			new[x] = ft_strsub(s, i, n - i + 1);
			x++;
		}
		i++;
	}
	return (new);
}
