# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wbeets <wbeets@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2013/12/04 14:47:38 by wbeets            #+#    #+#              #
#    Updated: 2013/12/06 14:38:59 by wbeets           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

.PHONY: clean fclean re

SRC = ft_ls.c
LIB = libft.a
NAME = ft_ls
DEB = deb
FLAGS =  -Wall -Werror -Wextra
GITFILES = ft_ls.c\
			Makefile\
			libft.a\
			head.h

all:
	gcc $(FLAGS) $(SRC) -L. $(LIB) -o $(NAME)

debug:
	cc -g $(SRC) -L. $(LIB) -o $(DEB)
	gdb $(DEB)

gps:
	git add $(GITFILES); git commit -m"auto"; git push

gpl:
	git pull;

clean:
	rm -f $(NAME)

fclean: clean
	rm -f $(DEB)

re: fclean all 

