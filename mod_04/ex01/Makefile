SRCS			= 	main.cpp\
					Animal.cpp\
					Cat.cpp\
					Dog.cpp\
					WrongAnimal.cpp\
					WrongCat.cpp\
					Brain.cpp

OBJS			= $(SRCS:.cpp=.o)

CXX				= c++
RM				= rm -f
CXXFLAGS			= -Wall -Wextra -Werror -g3 -std=c++98

NAME			= Polymorphism

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