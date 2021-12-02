# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/02 13:21:26 by mhirabay          #+#    #+#              #
#    Updated: 2021/12/02 17:00:39 by mhirabay         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap 

LIB_NAME = libftprintf 

SRCS = main.c 
OBJS = ${SRCS:.c=.o}

CC = gcc 
CFLAGS = -Wall -Werror -Wextra

all: ${LIB_NAME} ${NAME}

${LIB_NAME} :
	make -C lib/ft_printf

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(CLIENT_SRCS) -Llib/ft_printf -lftprintf -o $(CLIENT_NAME)

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean: 
	make clean -C lib/ft_printf
	${RM} ${SERVER_OBJS} ${CLIENT_OBJS} ${SERVER_BONUS_OBJS} ${CLIENT_BONUS_OBJS}

fclean: clean
	make fclean -C lib/ft_printf
	${RM} ${SERVER_NAME} ${CLIENT_NAME} ${SERVER_BONUS_NAME} ${CLIENT_BONUS_NAME}
re:		fclean all

.PHONY: all clean fclean re .c.o 
