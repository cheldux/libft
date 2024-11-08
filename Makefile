# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: thschnei <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/03 16:17:57 by thschnei          #+#    #+#              #
#    Updated: 2024/11/05 15:59:43 by thschnei         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft
CC = cc
CFLAGS = -Wall -Wextra -Werror
CFLAGS += -ggdb
FILES =
OBJS = $(FILES:%.c=%.o)

#Building the binary
all : $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

#Cleanup
re : fclean all

clean :
	$(RM) $(OBJS)
fclean :
	$(RM) $(OBJS) $(NAME)
.PHONY: all re clean fclean
