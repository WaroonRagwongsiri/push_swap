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

SRCS			:=	main.c

OBJS			:=	$(SRCS:%.c=%.o)
INC_DIR		:=	includes/

all				:	$(NAME)

$(NAME)			:	$(OBJS) Makefile
	$(CC) $(CFLAG) -I$(INC_DIR) $< -o $@

$(OBJS)			:	%.o : %.c
	@$(CC) $(CFLAG) -I$(INC_DIR) -c $< -o $@

clean			:
	rm -rf $(OBJS)

fclean			:	clean
	rm -rf $(NAME)

re				:	fclean all

.PHONY			:	all clean fclean re