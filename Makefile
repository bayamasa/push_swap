# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/02 13:21:26 by mhirabay          #+#    #+#              #
#    Updated: 2021/12/07 17:28:46 by mhirabay         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = a.out 
PLST_NAME = plst.a

LIB_NAME = libftprintf 

SRCS = 	swap.c \
		push.c \
		rotate.c \
		reverse_rotate.c \
		sa.c \
		sb.c \
		ss.c \
		pa.c \
		pb.c \
		ra.c \
		rb.c \
		rr.c \
		rra.c \
		rrb.c \
		rrr.c \
		process_one.c \
		process_two.c \
		process_three.c \
		process_less_than_seven.c \
		process_quick_sort.c \
		ft_plstadd_back.c \
		ft_plstadd_front.c \
		ft_plstdelone.c \
		ft_plstiter.c \
		ft_plstlast.c \
		ft_plstsize.c \
		ft_plstnew.c \
		ft_plstdel_front.c \
		ft_plstaddone_front.c \
		main.c \

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
			ft_plstaddone_front.c \

			

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
