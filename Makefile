# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/27 12:52:53 by cnunez-s          #+#    #+#              #
#    Updated: 2022/07/14 15:55:01 by cnunez-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	parse.c 
OBJS	=	${SRCS:.c=.o}
NAME	=	push_swap.a
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
