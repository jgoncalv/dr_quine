# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgoncalv <jgoncalv@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/30 23:13:07 by jgoncalv          #+#    #+#              #
#    Updated: 2017/10/30 23:25:07 by jgoncalv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Colleen\
Grace\
Sully

OBJ_DIR = obj/


SRC_NAME = $(addsuffix .c, $(NAME))

OBJ = $(addprefix $OBJ_DIR, $(SRC_NAME:.c=.o))

all:
	$(MAKE) -j (NAME)

$(OBJ_DIR):
	mkdir -p $(OBJ_DIR)
	mkdir -p $(dir $(OBJ))

?////////?
	SRC_DIR		=	src/
	INC_DIR		=	include/
	OBJ_DIR		=	obj/

	SRC_FILE	=	malloc.c\
		zone_list.c\
		zone_size.c\
		create_new_zone.c\
		realloc.c\
		free.c\
		show_alloc_mem.c\
		putfct.c

	SRCS		=	$(addprefix $(SRC_DIR), $(SRC_FILE))
	OBJS		=	$(addprefix $(OBJ_DIR), $(SRC_FILE:.c=.o))

	all:			$(NAME)

	$(NAME):		$(OBJ_DIR) $(OBJS)
		rm -rf $(LINK)
		$(CC) $(FLAGS) -I $(INC_DIR) $(OBJS) -shared -o $(NAME)
		ln -s $(NAME) $(LINK)

	$(OBJ_DIR):
		mkdir -p $(OBJ_DIR)
		mkdir -p $(dir $(OBJS))

	$(OBJ_DIR)%.o:	$(SRC_DIR)%.c | $(OBJ_DIR)
		$(CC) $(FLAGS) -MMD -c $< -o $@ -I $(INC_DIR)

	clean:
		rm -rf $(OBJ_DIR)
		rm -rf $(LINK)


	fclean:			clean
		rm -rf $(NAME)

	re:				fclean all

	.PHONY:			fclean clean re
