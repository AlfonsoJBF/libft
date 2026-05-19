# Output
NAME = ft_lib.a
TEST_NAME = test

# FUentes
SRCS = $(wildcard *.c)
OBJ = $(SRCS:.c=.o)
TEST_DIR = tests
TEST_SRCS = $(wildcard tests/*.c)
TEST_OBJ = $(TEST_SRCS:.c=.o)


HEADER = libft.h

# Compiler
CC = cc
CFLAGS = -Wall -Wextra -Werror -I. -g
$(NAME) : $(OBJ)
		ar -rcs $(NAME) $(OBJ)
	
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
	rm -f $(OBJ) $(TEST_OBJ)

fclean: clean
	rm -f $(NAME) $(TEST_NAME)

re: fclean $(NAME)

test: $(NAME) $(TEST_OBJ)
	$(CC) $(CFLAGS) $(TEST_OBJ) $(NAME) -o $(TEST_NAME)
.PHONY: all clean fclean re test
