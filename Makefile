# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mgould <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/28 11:37:28 by mgould            #+#    #+#              #
#    Updated: 2016/11/28 20:27:53 by mgould           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror -I .

O = ft_putchar.o ft_putstr.o ft_strlen.o ft_strcmp.o

SRC = ft_putchar.c ft_putstr.c ft_strlen.c ft_strcmp.c

all: $(NAME)

$(NAME):
	gcc $(CFLAGS) -c $(SRC)
	ar rc $(NAME) $(O)

clean:
	rm -f $(O)

fclean: clean
	rm -f $(NAME)

re: fclean all
