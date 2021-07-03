# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rpichon <rpichon@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/09 13:51:45 by rpichon           #+#    #+#              #
#    Updated: 2021/04/13 15:13:58 by rpichon          ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #


SRCS		= 		main.cpp
OBJS		= 		${SRCS:.cpp=.o}
NAME		= 		base
RM			= 		rm -f
FLAGS 		= 		-Wall -Wextra -Werror

# **************************************************************************** #
#								REGLES									       #
# **************************************************************************** #

all:							$(NAME)

%.o: %.cpp
								@clang++ $(FLAGS) -c $< -o $@

$(NAME):						$(OBJS) Makefile
								@clang++ $(FLAGS) $(OBJS) -o $(NAME)
								@echo "\n\033[0;32m[BASE OK] \033[0m \033\n"

clean:
								@echo "\033[0;32m[OK] \033[0m \033[0;33m Object files deleted:\033[0m"
								@$(RM) *.o

fclean:							clean
								@echo "\033[0;32m[OK] \033[0m \033[0;33m Object files  + exedeleted:\033[0m"
								@$(RM) $(NAME)

re:								fclean all

.PHONY: 						clean fclean

