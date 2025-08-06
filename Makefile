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

CC				:=	cc
CFLAG			:=	-Wall -Wextra -Werror -g3

INC_DIR			:=	includes/
SRCS_DIR		:=	srcs/

SRCS_FILES		:=	main.c \
					utils/put_error.c utils/check_argv.c utils/parser.c \
					utils/ft_stacknew.c utils/ft_stackclear.c \
					utils/print_stack.c utils/ft_stack_size.c \
					utils/ft_stackadd_back.c utils/ft_stackadd_front.c \
					utils/ft_stack_last.c \
					swap/push_swap.c \
					swap/pp.c swap/pp_print.c \
					swap/ss.c swap/ss_print.c \
					swap/rr.c swap/rr_print.c \
					swap/rrr.c swap/rrr_print.c \

SRCS			:=	$(SRCS_FILES:%.c=$(SRCS_DIR)%.c)
OBJS			:=	$(SRCS:%.c=%.o)

all				:	$(NAME)

$(NAME)			:	$(OBJS) Makefile
	@make -C libft
	@cp libft/libft.a .
	$(CC) $(CFLAG) -I$(INC_DIR) $(OBJS) libft.a -o $@

$(OBJS)			:	%.o : %.c
	@$(CC) $(CFLAG) -I$(INC_DIR) -c $< -o $@

clean			:
	rm -rf $(OBJS)
	@make -C libft clean

fclean			:	clean
	rm -rf $(NAME)
	rm -rf libft.a
	@make-C libft fclean

re				:	fclean all

.PHONY			:	all clean fclean re