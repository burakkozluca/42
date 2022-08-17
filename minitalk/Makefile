# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bkozluca <bkozluca@student.42kocaeli.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/17 10:30:37 by bkozluca          #+#    #+#              #
#    Updated: 2022/08/17 10:34:17 by bkozluca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CLIENT			=	client

SERVER			=	server

SRCS_CLIENT 	= 	./client.c \

SRCS_SERVER 	=	./server.c \

OBJS_CLIENT 	=	${SRCS_CLIENT:.c=.o}
OBJS_SERVER 	=	${SRCS_SERVER:.c=.o}

CC				=	gcc

CFLAGS			=	-Wall -Wextra -Werror

RM				=	rm -rf

all:			${SERVER} ${CLIENT}

.c.o:			${CC} ${CFLAGS} -c $< o ${<:.c=.o}

${CLIENT}:		${OBJS_CLIENT}
				${CC} ${CFLAGS} -o ${CLIENT} ${OBJS_CLIENT}

${SERVER}:		${OBJS_SERVER}
				${CC} ${CFLAGS} -o ${SERVER} ${OBJS_SERVER}

clean:
				${RM} ${OBJS_CLIENT} ${OBJS_SERVER}

fclean:			clean
				${RM} ${CLIENT} ${SERVER}

re:				fclean all

.PHONY:			all clean fclean re
