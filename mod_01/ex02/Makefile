SRCS			= 	main.cpp

OBJS			= $(SRCS:.cpp=.o)

CXX				= c++
RM				= rm -f
CXXFLAGS			= -Wall -Wextra -Werror -g3 -std=c++98

NAME			= hi_this_is_brain

all:			$(NAME)

%.o: %.cpp
				$(CXX) $(CXXFLAGS) -I. -o $@ -c $? 

$(NAME):		$(OBJS)
				${CXX} ${CXXFLAGS} -o ${NAME} ${OBJS}

clean:
				@echo "\n${GREEN} |   Cleaning Files"
				@$(RM) $(OBJS)
				@echo "${YELLOW}          [OK]\n"

fclean:			clean
				@$(RM) $(NAME)

re:				fclean all

.PHONY:			all clean fclean re