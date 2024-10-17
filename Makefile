# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: luinasci <luinasci@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/03 18:13:11 by luinasci          #+#    #+#              #
#    Updated: 2024/10/03 18:31:43 by luinasci         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#variables
CC = gcc
AR = ar
ARFLAGS = rcs
CFLAGS = -I includes -Wall -Wextra -Werror

#directories

SRC_DIR = srcs
INC_DIR = includes
OBJ_DIR = objs

#source and object files

SRC_FILES = $(wildcard $(SRC_DIR)/*.c)
OBJ_FILES = $(SRC_FILES:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

#library

NAME = libft.a

#rule

all:$(NAME)

#library rule

$(NAME): $(OBJ_FILES)
	$(AR) $(ARFLAGS) $@ $^

#compiling rules

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

#cleanup for objects

clean:
	rm -rf $(OBJ_DIR)

#full cleanup

fclean: clean
	rm -f $(NAME)

#library rebuild

re: fclean all

#prevent rules

.PHONY: all clean fclean re
