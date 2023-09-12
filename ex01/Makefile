# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/03 12:49:58 by abenheni          #+#    #+#              #
#    Updated: 2023/09/12 11:07:51 by abenheni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = phone
CC = c++
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC =  main.cpp PhoneBook.cpp Contact.cpp
OBJ = $(SRC:%.cpp=%.o)
all : $(NAME)
$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)
%.o : %.cpp PhoneBook.hpp Contact.hpp
	$(CC) $(CFLAGS)  -c $< -o $@
clean :
	$(RM) $(OBJ)
fclean : clean
	$(RM) $(NAME)

 

