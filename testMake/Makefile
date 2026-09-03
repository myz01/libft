# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/08/28 23:41:04 by muhabin3          #+#    #+#              #
#    Updated: 2026/08/31 11:45:07 by muhabin3         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

OBJ = $(SRC:.c=.out)
SRC = ft_strlen.c ft_isalpha.c

CC = cc
CFLAGS = -Wall -Wextra -Werror

all:$(OBJ)

%.out : %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -f $(OBJ)

re: clean all

.PHONY: all clean re