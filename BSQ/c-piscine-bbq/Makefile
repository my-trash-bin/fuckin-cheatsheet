# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: seobae <seobae@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/05 02:12:07 by seobae            #+#    #+#              #
#    Updated: 2020/11/05 03:53:53 by seobae           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
NAME	= BSQ
INCL	= include
SOURCES = check_valid_fts.c check_valid.c fill_square.c ft_init_bsq.c ft_read_file.c ft_split.c ft_write_file.c main.c utils.c
OBJECTS = ${SOURCES:.c=.o}

%.o: %.c
	${CC} -I${INCL} ${CFLAGS} -c $<
all: $(NAME)
${NAME}: ${OBJECTS}
	${CC} ${CFLAGS} -o $@ $^
clean:
	rm -f ${OBJECTS}
fclean: clean
	rm -f ${NAME}
re: fclean all
