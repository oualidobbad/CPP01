CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -std=c++98
NAME = replace
SRC = main.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) -o $@ $^

%.o: %.cpp
	$(CPP) $(CPPFLAGS) -c -o $@ $<

clean:
	rm -rf $(OBJ) *.replace

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re