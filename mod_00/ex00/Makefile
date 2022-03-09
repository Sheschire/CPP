SRCS			= megaphone.cpp

OBJS			= $(SRCS:.c=.o)

CC				= c++
#RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -std=c++98

NAME			= megaphone

all:			$(NAME)

%.o: %.c
				@$(CC) -I. -o $@ -c $? $(FLAGS)

$(NAME):		$(OBJS)
				${CC} ${CFLAGS} -o ${NAME} ${OBJS}

clean:
				@echo "\n${GREEN} |   Cleaning Files"
				@$(RM) $(OBJS)
				@echo "${YELLOW}          [OK]\n"

fclean:			clean
				@$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re