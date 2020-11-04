# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hyeopark <hyeopark@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/02 22:09:19 by hyeopark          #+#    #+#              #
#    Updated: 2020/11/04 21:57:59 by hyeopark         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
NAME	= do-op
SOURCES = do_op.c utils.c ft_atoi.c
OBJECTS = ${SOURCES:.c=.o}

%.o: %.c
	${CC} ${CFLAGS} -c $<

all: $(NAME)

${NAME}: ${OBJECTS}
	${CC} ${CFLAGS} -o $@ $^

clean:
	rm -f ${OBJECTS}

fclean: clean
	rm -f ${NAME}
	
re: fclean all