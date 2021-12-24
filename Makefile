# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/02 13:21:26 by mhirabay          #+#    #+#              #
#    Updated: 2021/12/24 21:12:49 by mhirabay         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap 
lst_NAME = lst.a

LIB_NAME = libftprintf
LIB_LST_NAME = lst

SRCS = 	main.c \
		push.c \
		swap.c \
		rotate.c \
		reverse_rotate.c \
		min.c \
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
		process_utils.c \
		process_greater_equal_seven.c \
		sort_a.c \
		sort_a_algo.c \
		sort_b.c \
		sort_b_algo.c \
		error_handling.c \
		process_utils_2.c \
		# process_quick_sort.c \
		# ft_lstadd_back.c \
		# ft_lstadd_front.c \
		# ft_lstdelone.c \
		# ft_lstiter.c \
		# ft_lstlast.c \
		# ft_lstsize.c \
		# ft_lstnew.c \
		# ft_lstdel_front.c \
		# ft_lstaddone_front.c \
		# main.c \

lst_SRCS = ft_lstadd_back.c \
			ft_lstadd_front.c \
			ft_lstdelone.c \
			ft_lstiter.c \
			ft_lstlast.c \
			ft_lstsize.c \
			ft_lstnew.c \
			ft_lstdel_front.c \
			ft_lstaddone_front.c \

			

OBJS = ${SRCS:.c=.o}
lst_OBJS = ${lst_SRCS:.c=.o}

CC = gcc 
CFLAGS = -Wall -Werror -Wextra 

all: ${LIB_NAME} ${NAME}

${LIB_NAME} :
	make -C lib/ft_printf
	make -C ft_lst

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(SRCS) -Llib/ft_printf -lftprintf -Lft_lst -llst -o $(NAME)

lst : ${lst_OBJS}
	ar rcs ${lst_NAME} ${lst_OBJS}

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean: 
	make clean -C lib/ft_printf
	${RM} ${SERVER_OBJS} ${CLIENT_OBJS} ${SERVER_BONUS_OBJS} ${CLIENT_BONUS_OBJS}

fclean: clean
	make fclean -C lib/ft_printf
	${RM} ${NAME} ${lst_NAME} ${lst_OBJS}
re:		fclean all

.PHONY: all clean fclean re .c.o 
