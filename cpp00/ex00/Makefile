# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bducrocq <bducrocq@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2016/11/29 16:05:24 by cfatrane          #+#    #+#              #
#    Updated: 2022/12/13 15:16:18 by bducrocq         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Binary 

NAME = megaphone

# Path

SRC_PATH = ./srcs/

OBJ_PATH = ./objs/


# Name

SRC_NAME =	megaphone.cpp

OBJ_NAME = $(SRC_NAME:.cpp=.o)

# Files

SRC = $(addprefix $(SRC_PATH)/,$(SRC_NAME))

OBJ = $(addprefix $(OBJ_PATH), $(OBJ_NAME))

# Flags

CC = g++ $(CFLAGS) $(SANITIZE) $(LLDBFLAG) $(STDCPP)

CFLAGS = -Wall -Wextra -Werror
SANITIZE =# -fsanitize=address
LLDBFLAG =# -g3
STDCPP = -std=c++98

# Rules

all: $(NAME) 


$(NAME): $(OBJ)
	@echo "\033[34mCreation of $(NAME)...\033[0m"
	@$(CC) $(OBJ) -o $@
	@echo "\033[32m$(NAME) created\n\033[0m"

$(OBJ_PATH)%.o: $(SRC_PATH)%.cpp ./Makefile
	@mkdir $(OBJ_PATH) 2> /dev/null || true
	$(CC)  -o $@ -c $<

clean:
	@echo "\033[33mRemoval of .o files of $(NAME) ...\033[0m"
	@rm -f $(OBJ)
	@rmdir $(OBJ_PATH) 2> /dev/null || true
	@echo "\033[31mFiles .o deleted\n\033[0m"

fclean: clean
	@echo "\033[33mRemoval of $(NAME)...\033[0m"
	@rm -rf $(NAME)
	@echo "\033[31mBinary $(NAME) deleted\n\033[0m"

re: fclean all

.PHONY: all, clean, fclean, re
