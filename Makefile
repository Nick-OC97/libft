# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAKEFILE                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: no-conne <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/05/20 12:49:23 by no-conne          #+#    #+#              #
#    Updated: 2019/05/20 16:17:34 by no-conne         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc

CFLAGS =  -Wall -Werror -Wextra

SOURCES = ft_putchar.c \
		  ft_putstr.c \
		  ft_putnbr.c \
		  ft_atoi.c \
		  ft_strcpy.c \
		  ft_strdup.c \
		  ft_strlen.c \

OBJECTS = ft_putchar.o \
		  ft_putstr.o \
		  ft_putnbr.o \
		  ft_atoi.o \
		  ft_strcpy.o \
		  ft_strdup.o \
		  ft_strlen.o \

all: $(NAME)

$(NAME):
	$(CC) $(CFLAGS) -c  $(SOURCES)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)
	rm -f $(OBJECTS)

clean:
	rm -f $(OBJECTS)

fclean: clean
	rm -f $(NAME)

re: fclean all

