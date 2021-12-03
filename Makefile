# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/02 13:21:26 by mhirabay          #+#    #+#              #
#    Updated: 2021/12/03 17:19:20 by mhirabay         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap 
PLST_NAME = plst.a

LIB_NAME = libftprintf 

SRCS = main.c 
PLST_SRCS = ft_plstadd_back.c \
			ft_plstadd_front.c \
			ft_plstclear.c \
			ft_plstdelone.c \
			ft_plstiter.c \
			ft_plstlast.c \
			ft_plstmap.c \
			ft_plstsize.c \
			ft_plstnew.c \
			ft_plstdel_front.c \
			ft_plstaddone_front.c

OBJS = ${SRCS:.c=.o}
PLST_OBJS = ${PLST_SRCS:.c=.o}

CC = gcc 
CFLAGS = -Wall -Werror -Wextra

all: ${LIB_NAME} ${NAME}

${LIB_NAME} :
	make -C lib/ft_printf

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(SRCS) -Llib/ft_printf -lftprintf -o $(NAME)

plst : ${PLST_OBJS}
	ar rcs ${PLST_NAME} ${PLST_OBJS}

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean: 
	make clean -C lib/ft_printf
	${RM} ${SERVER_OBJS} ${CLIENT_OBJS} ${SERVER_BONUS_OBJS} ${CLIENT_BONUS_OBJS}

fclean: clean
	make fclean -C lib/ft_printf
	${RM} ${NAME} ${PLST_NAME} ${PLST_OBJS}
re:		fclean all

.PHONY: all clean fclean re .c.o 
