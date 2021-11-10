NAME = libft.a
SRC_DIRS = ./srcs/
SRCS = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
OBJS = ${addprefix ${SRC_DIRS},${SRCS:.c=.o}} 
HEADER_DIRS = ./includes/
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: ${NAME}

${NAME}: ${OBJS} 
	ar -rc ${NAME} ${OBJS} 
	ranlib ${NAME}

%.o: %.c
	${CC} ${CFLAGS} -I$(HEADER_DIRS) -c $< -o $@

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
