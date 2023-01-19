NAME   = accon
SRC	   = Account.cpp Test.cpp
OBJ	   = $(SRC:.cpp=.o)
CC	   = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

all : $(NAME)

$(NAME) : $(OBJ)
		$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
		-rm rf $(OBJ)

fclean:
		-rm rf $(OBJ)
		-rm rm $(NAME)

re: clean all