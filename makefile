# Output
NAME = ft_lib.a

# Fuentes
SRCS = $(wildcard *.c)
OBJ = $(SRCS:.c=.o)

HEADER = libft.h

# Compiler
CC = cc
CFLAGS = -Wall -Wextra -Werror
$(NAME) : $(OBJ)
		ar -rcs $(NAME) $(OBJ)
	
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
