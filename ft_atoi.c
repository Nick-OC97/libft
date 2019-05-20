/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: no-conne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 08:19:12 by no-conne          #+#    #+#             */
/*   Updated: 2019/05/20 09:26:04 by no-conne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int num;
	int sign;

	i = 0;
	sign = 1;
	num = 0;
	if (!str)
		return (0);
	while (str[i] == ' ' || str[i] == '\v' || str[i] == '\n' || str[i] == '\r' || str[i] == '\f' || str[i] == '\t' || (str[i] < 48 || str[i] > 57))
		i++;
	if (str[i] == '-' && (str[i+1] >= 48 && str[i+1] <= 57)) //check if negative, with dash and next charcater a number
	{
		sign = -1;
		i++;
	}
	while (str[i] && str[i] >= 48 && str[i] <= 57)
	{
		num = num * 10 + (str[i] - 48);
		i++;
	}
	return (sign * num);
}
