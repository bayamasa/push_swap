# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/02 13:21:26 by mhirabay          #+#    #+#              #
#    Updated: 2022/01/21 21:22:14 by mhirabay         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap 

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
		sort_main.c \
		process_utils.c \
		sort_greater_equal_seven.c \
		sort_a.c \
		sort_b.c \
		sort_a_algo.c \
		sort_b_algo.c \
		error_handling.c \
		process_utils_2.c \
		sort_a_utils.c \
		sort_moved_b.c \
		sort_moved_b_utils.c \
		sort_b_utils.c \
		sort_utils.c \

OBJS = ${SRCS:.c=.o}

CC = gcc 
CFLAGS = -Wall -Werror -Wextra
LDFLAG = -Llib/libft -Llib/ft_lst -Llib/ft_printf
LIBS = -lft -llst -lftprintf

all: lmake ${NAME}

lmake :
	make -C lib/libft
	make -C lib/ft_printf
	make -C lib/ft_lst

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) ${LDFLAG} ${LIBS} -o $(NAME)

.c.o:
		${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

clean: 
	make clean -C lib/ft_printf 
	make clean -C lib/libft
	make clean -C lib/ft_lst
	${RM} ${OBJS}

fclean: clean
	make fclean -C lib/libft
	make fclean -C lib/ft_printf
	make fclean -C lib/ft_lst
	${RM} ${NAME} ${lst_NAME} ${lst_OBJS}
re:		fclean all

.PHONY: all clean fclean re .c.o lmake
