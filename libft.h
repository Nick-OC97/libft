/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: no-conne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 15:42:19 by no-conne          #+#    #+#             */
/*   Updated: 2019/05/21 13:58:57 by no-conne         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>

void		ft_putchar(char c);
void		ft_putstr(char *str);
void		ft_putnbr(int n);
int			ft_atoi(const char *str);
char		*ft_strcpy(char *dest, const char *src);
char		*ft_strdup(const char *str);
size_t		ft_strlen(const char *str);
char		*ft_strncpy(char *dest, const char *src, size_t n);
char		*ft_strcat(char *dest, const char *src);
char		*ft_strncat(char *dest, const char *src, size_t n);
size_t		ft_strlcat(char *dest, const char *src, size_t n);
char		*ft_strchr(const char *str, int c);
char		*ft_strstr(const char *haystack, const char *needle);

#endif
