NAME = identify

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = main.cpp generate.cpp identify.cpp Base.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@echo "Compilando programa..."
	@$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)

clean:
	@echo "Limpiando objetos..."
	@rm -f $(OBJS)

fclean: clean
	@echo "Eliminando ejecutable..."
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re