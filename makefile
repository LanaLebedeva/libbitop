NAME = libbitop.a

HEADER = ./libbitop.h

FUNCTIONS = checkbit.c setbit.c unsetbit.c switchbit.c

CC = gcc -Wall -Wextra -Werror

OBJECTS = ${FUNCTIONS:.c=.o}

all: $(NAME)

%.o: %.c $(HEADER)
	$(CC) -c $< -o ${<:.c=.o} -I ./

$(NAME): $(OBJECTS)
	ar rc $(NAME) $(OBJECTS)
	ranlib $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

