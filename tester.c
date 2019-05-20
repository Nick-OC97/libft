/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: no-conne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 08:46:15 by no-conne          #+#    #+#             */
/*   Updated: 2019/05/20 16:44:26 by no-conne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		main(int argc,char **argv)
{
	char str[] = "hello";
	char strd[6];
	char *strn;
	strn =ft_strdup(str);
	ft_putstr(strn);
	ft_putchar('\n');
	free(strn);
	ft_putstr(ft_strcpy(strd, str));
	ft_putchar('\n');
	if (argc == 2)
		ft_putnbr(ft_atoi(argv[1]));
	return(0);
}
