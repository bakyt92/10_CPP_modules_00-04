# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ufitzhug <ufitzhug@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/06 20:31:09 by ufitzhug          #+#    #+#              #
#    Updated: 2024/03/14 18:03:28 by ufitzhug         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone 

SRC = megaphone.cpp

OBJ = $(SRC:%.c= %.o)

CFLAGS = -Wall -Wextra -Werror -std=c++98

CC = g++

.PHONY : all clean fclean re 

all : $(NAME)

$(NAME) : $(OBJ) 
	$(CC) $(CFLAGS) -O2 $(OBJ) -o $(NAME)

%.o	: %.c 
	$(CC) $(CFLAGS) -c $< -o $@

clean	:
	@rm -f $(NAME)

fclean	:	clean
	@rm -f $(NAME)

re	:	fclean all

#The -c flag says to generate the object file, 
#the -o $@ says to put the output of the compilation in the file named on the 
#left side of the :, the $< is the first item in the dependencies list, 
#and the CFLAGS macro is defined as above.