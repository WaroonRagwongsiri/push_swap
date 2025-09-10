# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: waroonwork@gmail.com <WaroonRagwongsiri    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/07/10 14:50:41 by waroonwork@       #+#    #+#              #
#    Updated: 2025/07/10 14:50:41 by waroonwork@      ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			:=	push_swap
BONUS_NAME		:=	checker

CC				:=	cc
CFLAG			:=	-Wall -Wextra -Werror -g3

INC_DIR			:=	includes/
SRCS_DIR		:=	srcs/

SRCS_FILES		:=	main.c \
					utils/put_error.c utils/check_argv.c utils/parser.c \
					utils/ft_atol.c utils/is_duplicate.c \
					utils/ft_stacknew.c utils/ft_stackclear.c \
					utils/print_stack.c utils/ft_stack_size.c \
					utils/ft_stackadd_back.c utils/ft_stackadd_front.c \
					utils/ft_stack_last.c \
					utils/sol_list.c utils/ft_stack_index.c \
					swap/push_swap.c swap/sort_three.c swap/big_sort.c \
					swap/push_cost.c swap/b_to_a.c swap/sort_a.c \
					swap/operate_a_to_b.c \
					swap/pp.c \
					swap/ss.c \
					swap/rr.c \
					swap/rrr.c \
					utils/end.c \

SRCS			:=	$(SRCS_FILES:%.c=$(SRCS_DIR)%.c)
OBJS			:=	$(SRCS:%.c=%.o)

UTILS_OBJS		:=	$(filter-out $(SRCS_DIR)main.o, $(OBJS))

BONUS_DIR		:=	bonus/
BONUS_FILES		:=	main.c get_next_line.c get_next_line_utils.c

BONUS			:=	$(BONUS_FILES:%.c=$(BONUS_DIR)%.c)
BONUS_OBJS		:=	$(BONUS:%.c=%.o)

all				:	$(NAME) Makefile

$(NAME)			:	$(OBJS) Makefile
	@make -C libft
	@cp libft/libft.a .
	$(CC) $(CFLAG) -I$(INC_DIR) $(OBJS) libft.a -o $@

$(OBJS)			:	%.o : %.c
	$(CC) $(CFLAG) -I$(INC_DIR) -c $< -o $@

clean			:
	rm -rf $(OBJS)
	rm -rf $(BONUS_OBJS)
	rm -rf $(UTILS_OBJS)
	@make -C libft clean

fclean			:	clean
	rm -rf $(NAME)
	rm -rf libft.a
	rm -rf $(BONUS_NAME)
	@make -C libft fclean

bonus			:	$(BONUS_NAME)

$(BONUS_NAME)	:	$(BONUS_OBJS) $(UTILS_OBJS) Makefile
	@make -C libft
	@cp libft/libft.a .
	$(CC) $(CFLAG) -I$(INC_DIR) $(BONUS_OBJS) $(UTILS_OBJS) libft.a -o $@

$(BONUS_OBJS)	:	%.o : %.c
	$(CC) $(CFLAG) -I$(INC_DIR) -c $< -o $@

re				:	fclean all

.PHONY			:	all clean fclean re bonus