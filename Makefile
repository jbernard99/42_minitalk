# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jbernard <jbernard@student.42quebec.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/15 14:28:11 by jbernard          #+#    #+#              #
#    Updated: 2022/02/15 14:51:32 by jbernard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

HEADER 	= minitalk.h

NAME_C 	= client
SRC_C 	= client.c \
		tools.c
OBJ_C 	= ${SRC_C:.c=.o}

NAME_S 	= server
SRC_S 	= server.c \
		tools.c
OBJ_S 	= ${SRC_S:.c=.o}

CC 		= gcc
CFLAGS 	= -Wall -Wextra -Werror

all: ${NAME_C} ${NAME_S}

${NAME_C}: ${SRC_C}
	${CC} ${CFLAGS} ${SRC_C} -o ${NAME_C}

${NAME_S}: ${SRC_S}
	${CC} ${CFLAGS} ${SRC_S} -o ${NAME_S}

clean:
	rm -rf ${NAME_C} ${NAME_S}

fclean: clean
	echo "Fully cleaned!"

re: fclean all