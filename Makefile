NAME	=	log

SRCS	= 	put_log.c		\
		main.c


OBJS	=	$(SRCS:.c=.o)

CC	=	gcc

CFLAGS	=	-g -Wall -Wextra -Werror -pedantic -Wshadow

all	:	$(NAME)

$(NAME)	:	$(OBJS)
		$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean	:
		$(RM) *.o *~ $(TARGET)

fclean	:
		$(RM) *.o *~ *# $(TARGET) $(NAME)

re	:	fclean $(NAME)
