CC = gcc
CFLAGS = -Wall -Wextra

NAME = factorization

OBJS = factorization.o

RM = rm -f

all : $(NAME)

$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean : 
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all