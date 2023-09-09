# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: abenheni <abenheni@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/09/03 12:49:58 by abenheni          #+#    #+#              #
#    Updated: 2023/09/09 11:21:45 by abenheni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone
CC = c++
RM = rm -f
CFLAGS = -Wall -Wextra -Werror -std=c++98
SRC =  megaphone.cpp
OBJ = $(SRC:%.cpp=%.o)
all : $(NAME)
$(NAME) : $(OBJ)
	$(CC) $(CFLAGS) $(OBJ)  -o $(NAME)
%.o : %.cpp 
	$(CC) $(CFLAGS)  -c $< -o $@ 
clean :
	$(RM) $(OBJ)
fclean : clean
	$(RM) $(NAME)
re : fclean all
.phony : all clean fclean $(NAME)
