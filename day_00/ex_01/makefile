# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eliott <eliott@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/17 16:58:45 by eliott            #+#    #+#              #
#    Updated: 2020/07/18 11:31:49 by eliott           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRC_PATH		= ./

SRCS_NAME		= yakoapelo.cpp Contact.class.cpp #yakoapelo.class.hpp

SRC				= $(addprefix $(SRC_PATH), $(SRCS_NAME))

OBJ_PATH 		= obj/

OBJ_NAME 		= ${SRCS_NAME:.c=.o}

OBJ 			= $(addprefix $(SRC_PATH), $(OBJ_NAME))

NAME			= yakoapelo

RM				= rm -rf

FLAG			= -Wall -Wextra -Werror -O3

#FLAGS			= -g3 -fsanitize=address

# **************************************************************************** #
#								REGLES									       #
# **************************************************************************** #

all: $(OBJ_PATH) $(NAME)

$(NAME): $(OBJ)
	@clang++ $(FLAG) $(OBJ) -o $(NAME)
	@printf "\33[2K\r \033[0m\033[0;33myakoapelo: \t\033[0;38;5;121is compiled!\n\033[0m"

$(OBJ_PATH):
	@mkdir -p obj/ 2> /dev/null

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@printf "\033[2K\r\033[0;32m[Compiling] : \t\033[0;32m\033[0m$<"
	@clang++ $(FLAG) -c $< -o $@

clean:
	@printf "\033[2K\r\033[31mDeleting yakoapelo srcs/	\033[37m"
	@sleep 0.1
	@printf "\033[2K\r\033[31mDeleting yakoapelo srcs/.	\033[37m"
	@sleep 0.1
	@printf "\033[2K\r\033[31mDeleting yakoapelo srcs/..	\033[37m"
	@sleep 0.1
	@printf "\033[2K\r\033[31mDeleting yakoapelo srcs/...	\033[37m"
	@sleep 0.1
	@printf "\033[2K\r\033[31mDeleting yakoapelo srcs/	\033[37m"
	@sleep 0.1
	@printf "\033[2K\r\033[31mDeleting yakoapelo srcs/.	\033[37m"
	@sleep 0.1
	@printf "\033[2K\r\033[31mDeleting yakoapelo srcs/..	\033[37m"
	@sleep 0.1
	@printf "\033[2K\r\033[31mDeleting yakoapelo srcs/...	\033[37m"
	@sleep 0.1
	@${RM} ${OBJ_PATH}
	@printf "\33[2K\r \033[0;32m[OK] \033[0m \033[36m Deleted successfully!\n\033[0m"

fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY: clean fclean
