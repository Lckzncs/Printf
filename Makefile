# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ludo-nas <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/23 12:55:27 by ludo-nas          #+#    #+#              #
#    Updated: 2024/10/23 12:55:32 by ludo-nas         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

FLAGS = -Wall -Wextra -Werror

SRCS =	ft_printf.c\
		ft_print_char.c\
		ft_print_number.c\
		ft_print_number_hex.c\
		ft_print_pointer_hex.c\
		ft_print_str.c\
		ft_print_unsigned_int.c\
		
OBJS =	ft_printf.o\
		ft_print_char.o\
		ft_print_number.o\
		ft_print_number_hex.o\
		ft_print_pointer_hex.o\
		ft_print_str.o\
		ft_print_unsigned_int.o\

all: $(NAME)

$(NAME):
	cc $(FLAGS) -c $(SRCS)
	ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re:	fclean all
