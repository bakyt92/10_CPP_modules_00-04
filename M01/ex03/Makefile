# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ufitzhug <ufitzhug@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/17 21:32:32 by ufitzhug          #+#    #+#              #
#    Updated: 2024/03/19 14:11:07 by ufitzhug         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Unnecessary_Violence 

SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp

HEADER = Weapon.hpp	HumanA.hpp HumanB.hpp

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