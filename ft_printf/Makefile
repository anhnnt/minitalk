
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ngnguyen <ngnguyen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/18 17:18:52 by ngnguyen          #+#    #+#              #
#    Updated: 2022/12/02 15:52:05 by ngnguyen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

HEADER = ./includes/ft_printf.h

LIB_HEADER = ./libft/libft.h

LIB_NAME = ./libft/libft.a

LIBFT = libft

SRC = ft_print_char.c ft_print_hex.c ft_print_integer.c ft_print_string.c ft_print_unsigned_decimal.c \
		ft_print_vpointer.c ft_printf_utils.c ft_printf.c ft_handle.c

OFILE = $(SRC:.c=.o)

CC = cc

FLAG = -Wall -Wextra -Werror

AR = ar rc

RL = ranlib

$(NAME): $(SRC)
	$(CC) -c $(FLAG) $(SRC) -I $(LIB_HEADER) -I $(HEADER)
	@make -C $(LIBFT)
	cp $(LIB_NAME) $(NAME)
	$(AR) $(NAME) $(OFILE)
	$(RL) $(NAME)

all: $(NAME)

clean:
	@make clean -C $(LIBFT)
	$(RM) $(OFILE)

fclean: clean
	@make fclean -C libft/
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
