# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/04 14:47:38 by wbeets            #+#    #+#              #
#    Updated: 2013/12/09 14:09:32 by gpetrov          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: clean fclean re

SRC = ft_ls.c
LIB = libft/libft.a
NAME = ft_ls
DEB = deb
FLAGS =  -Wall -Werror -Wextra
GITFILES = ft_ls.c\
			Makefile\
			libft.a\
			head.h
INC = -I libft/includes/

all:
	gcc $(FLAGS) $(SRC) -L. $(LIB) $(INC) -o $(NAME)

debug:
	cc -g $(SRC) -L. $(LIB) -o $(DEB)
	gdb $(DEB)

relib:
	cd libft; make; make clean

gps:
	git add $(GITFILES); git commit -m"auto"; git push

gpl:
	git pull;

clean:
	rm -f $(NAME)

fclean: clean
	rm -f $(DEB)

re: fclean all 

pasw:
	git config --global credential.helper "cache --timeout=3600"
