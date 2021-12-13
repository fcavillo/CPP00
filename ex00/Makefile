# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fcavillo <fcavillo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/24 17:54:15 by fcavillo          #+#    #+#              #
#    Updated: 2021/12/13 11:33:44 by fcavillo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC	= clang++

CFLAGS	= -Wall -Wextra -Werror -std=c++98

SRCS =	megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

${NAME}: $(OBJS)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

all : ${NAME}

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY:	all clean re fclean re