# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fcavillo <fcavillo@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/24 17:54:15 by fcavillo          #+#    #+#              #
#    Updated: 2021/11/26 16:37:32 by fcavillo         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = cpp.out

RM = rm -f

CC	= gcc

CFLAGS	= -Wall -Wextra -Werror

SRC_FILES =	megaphone.cpp

INCL = -I .

LIBS = -lpthread

OBJS_DIR = ./.objs/
OBJ_FILES = $(SRC_FILES:.cpp=.o)
OBJS = $(addprefix $(OBJS_DIR), $(OBJ_FILES))

$(NAME): $(OBJS_DIR) $(OBJS) 
		${CC} ${CFLAGS} ${OBJS} ${LIBS} -o ${NAME} ${INCL}

$(OBJS_DIR)%.o: $(SRCS_DIR)%.c $(HEADERS) Makefile
	$(CC) $(CFLAGS) -o $@ -c $<

$(OBJS_DIR):
	mkdir -p $@

all : ${NAME}

clean:
	$(RM) -Rf $(OBJS_DIR)
	${RM} ${OBJS}

fclean: clean
	${RM} ${NAME}

re: fclean all

.PHONY:	all clean re fclean re