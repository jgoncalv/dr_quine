# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgoncalv <jgoncalv@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/09 12:35:46 by jgoncalv          #+#    #+#              #
#    Updated: 2017/11/09 12:36:02 by jgoncalv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	Sully

CC			=	gcc
FLAGS		=	-Wall -Wextra -Werror -g

SRC_DIR		=	src/
INC_DIR		=	include/
OBJ_DIR		=	obj/

SRC_FILE	= Sully.c

SRCS		=	$(addprefix $(SRC_DIR), $(SRC_FILE))
OBJS		=	$(addprefix $(OBJ_DIR), $(SRC_FILE:.c=.o))

all:			$(NAME)

$(NAME):		$(OBJ_DIR) $(OBJS)
	$(CC) $(FLAGS) -I $(INC_DIR) $(OBJS) -o $(NAME)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)
	mkdir -p $(dir $(OBJS))

$(OBJ_DIR)%.o:	$(SRC_DIR)%.c | $(OBJ_DIR)
	$(CC) $(FLAGS) -MMD -c $< -o $@ -I $(INC_DIR)

clean:
	rm -rf $(OBJ_DIR)

fclean:			clean
	rm -rf $(NAME)

re:				fclean all

.PHONY:			fclean clean re

-include $(OBJS:.o=.d)
