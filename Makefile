# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/02 13:21:26 by mhirabay          #+#    #+#              #
#    Updated: 2022/01/21 16:49:35 by mhirabay         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap 
lst_NAME = lst.a

LIB_NAME = libftprintf

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
LDFLAG = -Llib/libft -Llib/ft_lst -Llib/ft_printf
LIBS = -lft -llst -lftprintf

all: ${LIB_NAME} ${NAME}

${LIB_NAME} :
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

.PHONY: all clean fclean re .c.o 
