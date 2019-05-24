/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: no-conne <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 15:42:19 by no-conne          #+#    #+#             */
/*   Updated: 2019/05/24 14:59:50 by no-conne         ###   ########.fr       */
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
void		*ft_memset(void *str, int c, size_t n);
void		ft_bzero(void *str, size_t n);
void		*ft_memcpy(void *str1, const void *str2, size_t n);
void		*ft_memccpy(void *dest, const void *src, int c, size_t n);
void		*ft_memmove(void *str1, const void *str2, size_t n);
void		*ft_memchr(const void *str, int c, size_t n);
int			ft_memcmp(const void *str1, const void *str2, size_t n);
char		*ft_strrchr(const char *str, int c);
char		*ft_strnstr(const char *haystack, const char *needlem, size_t n);
int			ft_strcmp(const char *str1, const char *str2);
int			ft_strncmp(const char *str1, const char *str2, size_t n);

#endif
