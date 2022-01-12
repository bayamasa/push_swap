# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mhirabay <mhirabay@student.42tokyo.jp>     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/02 13:21:26 by mhirabay          #+#    #+#              #
#    Updated: 2022/01/12 15:36:27 by mhirabay         ###   ########.fr        #
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
		# sort_three_each_case_b.c \
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
	${RM} ${OBJS}

fclean: clean
	make fclean -C lib/ft_printf
	${RM} ${NAME} ${lst_NAME} ${lst_OBJS}
re:		fclean all

.PHONY: all clean fclean re .c.o 
