# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: marvin <marvin@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/20 16:52:16 by marvin            #+#    #+#              #
#    Updated: 2025/06/20 16:52:16 by marvin           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			:=	libft.a

CC				:=	cc
CFLAG			:=	-Wall -Wextra -Werror -g3

SRCS_DIR		:=	srcs/
INC_DIR			:=	includes/

SRCS_FILES		:=	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c \
					ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c \
					ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c \
					ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c \
					ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c \
					ft_atoi.c \
					ft_calloc.c ft_strdup.c \
					\
					ft_substr.c ft_strjoin.c \
					ft_strtrim.c ft_split.c ft_itoa.c \
					ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
					ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
					\
					ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
					ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c \
					ft_lstiter.c ft_lstmap.c \

SRCS			:=	$(SRCS_FILES:%.c=$(SRCS_DIR)%.c)
OBJS			:=	$(SRCS:%.c=%.o)

all				:	$(NAME)

$(NAME)			:	$(OBJS) Makefile
	@ar rcs -o $@ $^

$(OBJS)			:	%.o : %.c
	@$(CC) $(CFLAGS) -I$(INC_DIR) -c $< -o $@

clean			:
	@rm -rf $(OBJS) $(BONUS_OBJS)

fclean			:	clean
	@rm -rf $(NAME)

re				:	fclean all

.PHONY			:	all clean fclean re