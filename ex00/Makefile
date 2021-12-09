# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fcavillo <fcavillo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/24 17:54:15 by fcavillo          #+#    #+#              #
#    Updated: 2021/12/09 14:27:21 by fcavillo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC	= clang++

CFLAGS	= -Wall -Wextra -Werror #-std=c++98

SRCS =	megaphone.cpp

OBJS = $(SRCS:.cpp=.o)

${NAME}: $(OBJS)
		$(CC) $(FLAGS) -o $(NAME) $(OBJS)

all : ${NAME}

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f ${NAME}

re: fclean all

.PHONY:	all clean re fclean re