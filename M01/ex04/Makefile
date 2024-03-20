# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ufitzhug <ufitzhug@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/19 15:39:36 by ufitzhug          #+#    #+#              #
#    Updated: 2024/03/19 21:28:03 by ufitzhug         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = Sed2

SRC = main.cpp Sed2.cpp

HEADER = Sed2.hpp

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

#The -c flag says to generate the object file, 
#the -o $@ says to put the output of the compilation in the file named on the 
#left side of the :, the $< is the first item in the dependencies list, 
#and the CFLAGS macro is defined as above.