# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jgoncalv <jgoncalv@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/30 23:13:07 by jgoncalv          #+#    #+#              #
#    Updated: 2017/11/09 12:53:17 by jgoncalv         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

all:
	make -C ./Colleen
	make -C ./Grace
	make -C ./Sully

clean:
	make clean -C ./Colleen
	make clean -C ./Grace
	make clean -C ./Sully

fclean:
	make fclean -C ./Colleen
	make fclean -C ./Grace
	make fclean -C ./Sully

re:				fclean all

.PHONY:			fclean clean re
