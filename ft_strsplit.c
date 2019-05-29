/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: no-conne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 12:30:26 by no-conne          #+#    #+#             */
/*   Updated: 2019/05/29 12:15:46 by no-conne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	counter(char *s, char c, int n)
{
	while (s[n] != c && s[n] != '\0')
	{
		n++;
	}
	return (n);
}

static int	word_count(char c, char *s)
{
	int		cnt;
	int		i;

	cnt = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			cnt++;
			i = counter(s, c, i) - 1;
		}
		i++;
	}
	return (cnt);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		n;
	int		x;
	char	**new;
	char	*str;

	i = 0;
	x = 0;
	str = ft_strtrim(s);
	if (!(new = (char **)malloc(sizeof(char *) * (word_count(c, str) + 1))))
		return (NULL);
	while (str[i] != '\0')
	{
		if (str[i] != c)
		{
			n = counter(str, c, i);
			if (n > 0)
				new[x] = ft_strsub(str, i, n - i);
			x++;
			i = n;
		}
		i++;
	}
	return (new);
}
