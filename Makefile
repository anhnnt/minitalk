SERVER_NAME = server

CLIENT_NAME = client

SER_SRC = server.c

CLI_SRC = client.c

CC = cc

FLAG = -Wall -Wextra -Werror

SER_O = $(SER_SRC:.c=.o)

CLI_O = $(CLI_SRC:.c=.o)

RM = rm -f

$(SERVER_NAME) = $(SER_SRC)
		$(CC) $(FLAG) -o $(SERVER_NAME) $(SER_SRC)

$(CLIENT_NAME) = $(CLI_SRC)
		$(CC) $(FLAG) -o $(CLIENT_NAME) $(CLI_SRC)

all: $(SERVER_NAME) $(CLIENT_NAME)

clean:
	$(RM) $(SER_O) $(CLI_O)

fclean: clean
	
re: fclean all

.PHONY: all clean fclean re
