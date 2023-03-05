# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ngnguyen <ngnguyen@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/08 14:42:34 by ngnguyen          #+#    #+#              #
#    Updated: 2022/12/02 15:17:50 by ngnguyen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c	\
		ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c		\
		ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c	\
		ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c	\
		ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c	\
		ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c		\
		ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c		\
		ft_strmapi.c ft_striteri.c ft_putchar_fd.c			\
		ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c		\

SRC_BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c		\
			ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c	\
			ft_lstiter.c									\

NAME = libft.a

HEADER = libft.h

RM = rm -f

AR = ar rc

RL = ranlib

OFILE = $(SRC:.c=.o)

OFILE_BONUS = $(SRC_BONUS:.c=.o)

FLAG = -Wall -Wextra -Werror

CC = gcc

$(NAME):
	$(CC) $(FLAG) -c $(SRC)
	$(AR) $(NAME) $(OFILE)
	$(RL) $(NAME)

bonus: ${OFILE_BONUS}

${OFILE_BONUS}:
	$(CC) $(FLAG) -c $(SRC_BONUS)
	$(AR) $(NAME) $(OFILE_BONUS)
	$(RL) $(NAME)

all: $(NAME)

clean:
	$(RM) $(OFILE) $(OFILE_BONUS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: bonus all clean fclean re
