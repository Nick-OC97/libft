# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAKEFILE                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: no-conne <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/20 12:49:23 by no-conne          #+#    #+#              #
#    Updated: 2019/05/20 13:02:12 by no-conne         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SOURCES = ft_putchar.c ft_putstr.c ft_putnbr.c ft_atoi.c ft_strcpy.c ft_strdup.c ft_strlen.c tester.c

HEADERS = testh.h

OBJECTS = $(SOURCES)

WFLAGS = -g -Wall -Werror -Wextra

CC = gcc

all: $(NAME)

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

%.o: %.c
	$(CC) $(WFLAGS) $(HEADERS) -c -o

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

