# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/27 12:52:53 by cnunez-s          #+#    #+#              #
#    Updated: 2022/06/27 12:54:40 by cnunez-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= 
OBJS	=	${SRCS:.c=.o}
NAME	=	
CC			=	gcc
AR			=	ar rc
CFLAGS	=	-Wall -Werror -Wextra

.c.o:
		${CC} ${CFLAGS} -c ${SRCS}

all:	${NAME}

$(NAME):	${OBJS}
	${AR} ${NAME} ${OBJS}

clean:
		${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re:		fclean all

.PHONY: all clean fclean re
