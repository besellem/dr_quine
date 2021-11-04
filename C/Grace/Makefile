# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: besellem <besellem@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/04 16:50:48 by besellem          #+#    #+#              #
#    Updated: 2021/11/04 17:05:27 by besellem         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	:=	Grace

SRCS	:=	Grace.c

OBJS	=	$(SRCS:.c=.o)

CC		:=	clang
CFLAGS	:=	-Wall -Wextra -Werror

# Colors
CLR_COLOR	:= \033[0m
YELLOW		:= \033[1;33m
CYAN 		:= \033[1;36m

.c.o:
			@echo "Compiling $(YELLOW)$< $(CLR_COLOR)..."
			@$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

$(NAME):	$(OBJS)
			@$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

all:		$(NAME)

clean:
			@echo "Deleting $(CYAN)$(NAME)'s $(CLR_COLOR)objs ..."
			@rm -f $(OBJS)

fclean:		clean
			@echo "Deleting $(CYAN)$(NAME)'s $(CLR_COLOR)binary ..."
			@rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re
