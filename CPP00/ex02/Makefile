NAME   = accon
SRC	   = Account.cpp Test.cpp
OBJ	   = $(SRC:.cpp=.o)
CC	   = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98
OCLAGS = -Wall -Wextra -Werror

all : $(NAME)

$(NAME) : $(OBJ)
		$(CC) $(OCLAGS) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
		rm -rf $(OBJ)

fclean:
		rm -rf $(OBJ)
		rm -rf $(NAME)

re: clean all