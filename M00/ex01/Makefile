# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ufitzhug <ufitzhug@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/07 14:38:30 by ufitzhug          #+#    #+#              #
#    Updated: 2024/03/07 21:55:08 by ufitzhug         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Phonebook 

SRC = Phonebook.cpp Contact.cpp

HEADER = Phonebook.hpp Contact.hpp

OBJ = $(SRC:%.c= %.o)

CFLAGS = -Wall -Wextra -Werror -std=c++98

CC = g++

.PHONY : all clean fclean re 

all : $(NAME)

$(NAME) : $(OBJ) $(HEADER)
	$(CC) $(CFLAGS) -O2 $(OBJ) -o $(NAME)

%.o	: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean	:
	@rm -f $(OBJ)

fclean	:	clean
	@$(RM) $(NAME)

re	:	fclean all

#The -c flag says to generate the object file, 
#the -o $@ says to put the output of the compilation in the file named on the 
#left side of the :, the $< is the first item in the dependencies list, 
#and the CFLAGS macro is defined as above.