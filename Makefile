# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ngnguyen <ngnguyen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/22 13:16:43 by ngnguyen          #+#    #+#              #
#    Updated: 2023/05/22 13:39:12 by ngnguyen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SERVER_NAME = server

CLIENT_NAME = client

FT_PRINTF = libftprintf.a

SER_SRC = server.c

CLI_SRC = client.c

CC = cc

FLAG = -Wall -Wextra -Werror

SER_O = ${SER_SRC:.c=.o}

CLI_O = ${CLI_SRC:.c=.o}

INCLUDE = -I include

RM = rm -rf

all: $(SERVER_NAME) $(CLIENT_NAME)

$(SERVER_NAME): $(SER_O)
		@make -C ft_printf
		$(CC) $(FLAG) $(SER_O) $(INCLUDE) ft_printf/$(FT_PRINTF) -o $(SERVER_NAME)

$(CLIENT_NAME): $(CLI_O)
		@make -C ft_printf
		$(CC) $(FLAG) $(CLI_O) $(INCLUDE) ft_printf/$(FT_PRINTF) -o $(CLIENT_NAME)

clean:
	@make clean -C ft_printf
	$(RM) $(SER_O) $(CLI_O)

fclean: clean
	@make fclean -C ft_printf
	$(RM) $(SERVER_NAME)
	$(RM) $(CLIENT_NAME)
	$(RM) $(FT_PRINTF)
	
re: fclean all

.PHONY: all clean fclean re
