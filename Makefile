# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mmoumni <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/24 16:40:12 by mmoumni           #+#    #+#              #
#    Updated: 2021/11/26 09:21:40 by mmoumni          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRC = ft_print_adress.c ft_print_p.c ft_putnbr.c ft_putstr.c ft_print_hex.c ft_printf.c ft_putchar.c ft_putnbr_u.c

OBJ = $(SRC:.c=.o)

NAME = libftprintf.a

GCC_FLAG = -Wall -Wextra -Werror

all : $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)

%.o: %.c ft_printf.h
	gcc -Wall -Wextra -Werror -c $<

clean:
	rm -f $(OBJ)
fclean:
	rm -f $(OBJ) $(NAME)
re:fclean all
