NAME    = zombie

CXX     = c++
CXXFLAGS= -Wall -Wextra -Werror -std=c++98

SRC     = main.cpp Zombie.cpp Zombie.hpp zombieHorde.cpp

OBJS    = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS) Zombie.hpp
	$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re