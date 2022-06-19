# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cnunez-s <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/06/19 19:36:05 by cnunez-s          #+#    #+#              #
#    Updated: 2022/06/19 21:13:19 by cnunez-s         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	= ft_lstnew.c

OBJS	= ${SRCS:.c=.o}

name	= test.a

CC		= gcc
RM		= rm -f
CFLAGS	= -Wall -Wextra -Werror
AR		= ae rc
.c.0:
	${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	${AR} ${NAME} ${OBJS}

all:	${NAME}

clean:
	${RM} ${OBJS}

fclean: clean
		${RM} ${NAME}

re:		fclean all

.PHONY: all clean fclean re
