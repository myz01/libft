# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: muhabin3 <muhabin3@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2026/08/28 23:41:04 by muhabin3          #+#    #+#              #
#    Updated: 2026/09/22 13:27:11 by muhabin3         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c 		\
ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c 	\
ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c 			\
ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c 	\
ft_strdup.c ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c 		\
ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c 	\
ft_putnbr_fd.c ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c 		\
ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c	ft_lstmap.c

OBJ = $(SRC:.c=.o)

CC = cc
CFLAGS = -Wall -Wextra -Werror

#as a starting point
all: $(NAME)

#it will compile and create filename of *.o
%.o : %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

#to create/update .a file 
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

#it will clean *.o
clean:
	rm -f $(OBJ)

#it will clean *.o and *.a
fclean: clean
	rm -f $(NAME)

#it will clean *.o *.a and redo
re: fclean all

#it will still run even got file name *
.PHONY: all clean fclean re