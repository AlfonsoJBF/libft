# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: albustos   <albustos@student.42.fr>        +#+  +:+       +#+         #
#                                                   +#+#+#+#+#+   +#+            #
#    Created: 2026/05/19 00:00:00 by albustos          #+#    #+#              #
#    Updated: 2026/05/19 00:00:00 by albustos         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Output
TEST_NAME = test

# Sources and Objects
SRCS = $(wildcard *.c)
OBJ = $(SRCS:.c=.o)

# Path to libft (parent directory)
LIBFT_PATH = ..
LIBFT = $(LIBFT_PATH)/ft_lib.a

# Header
HEADER = tests_libft.h

# Compiler
CC = cc
CFLAGS = -Wall -Wextra -Werror -I$(LIBFT_PATH) -lbsd

# Rules
all: $(TEST_NAME)

$(TEST_NAME): $(LIBFT) $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) $(LIBFT) -o $(TEST_NAME)

$(LIBFT):
	make -C $(LIBFT_PATH)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(TEST_NAME)

re: fclean all

.PHONY: all clean fclean re
