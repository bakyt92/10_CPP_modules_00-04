# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ufitzhug <ufitzhug@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/22 14:45:45 by ufitzhug          #+#    #+#              #
#    Updated: 2024/03/22 15:58:58 by ufitzhug         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = MyFirstClass 

SRC = main.cpp Fixed.cpp

HEADER = Fixed.hpp

OBJ = $(SRC:%.c= %.o)

CFLAGS = -Wall -Wextra -Werror -std=c++98

CC = g++

all : $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	$(CC) $(CFLAGS) -O2 $(OBJ) -o $(NAME)

%.o	: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean	:
	@rm -rf $(NAME)

fclean	:	clean
	@rm -rf $(NAME)

re	:	fclean all

.PHONY : all clean fclean re 