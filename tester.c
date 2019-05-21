/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: no-conne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 08:46:15 by no-conne          #+#    #+#             */
/*   Updated: 2019/05/21 11:01:46 by no-conne         ###   ########.fr       */
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
	char cat[] = "hello";
	char catn[10] ="nice";
	char catl[] = "hello";
	char catld[10] = "nice";

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
	ft_putchar('\n');   //test strcat

	ft_putstr(ft_strncat(catn, cat, 3));
	ft_putchar('\n');   // test strncat

	ft_putnbr((int)ft_strlcat(catld, catl, 3));
	ft_putchar('\n');   // test strlcat
	return(0);
}
