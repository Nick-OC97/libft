/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: no-conne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 08:46:15 by no-conne          #+#    #+#             */
/*   Updated: 2019/05/21 09:04:44 by no-conne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		main(int argc,char **argv)
{
	char str[] = "hello";
	char stri[10] = "nice";
	char strd[6];
	char *strn;
	char strt[7];
	strn =ft_strdup(str);
	ft_putstr(strn);
	ft_putchar('\n');
	free(strn);			//test strdup

	ft_putstr(ft_strcpy(strd, str));
	ft_putchar('\n');   //test strcpy
	
	if (argc == 2)
		ft_putnbr(ft_atoi(argv[1]));
	ft_putchar('\n');   //test putnbr and atoi
	
	ft_putstr(ft_strncpy(strt, str, 3));
	ft_putchar('\n');   //test strncpy

	ft_putstr(ft_strcat(stri, str));
	return(0);
}
