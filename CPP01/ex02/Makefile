NAME  = main
SRC   = main.cpp
OBJ   = $(SRC:.cpp=.o)
CC    = c++
CFLAG = -Wall -Wextra -Werror

all     : $(NAME)

$(NAME) : $(OBJ)
		$(CC) $(OBJ) $(CFLAG) -o $(NAME)

clean   : 
		rm -rf $(OBJ)

fclean  :
		rm -rf $(OBJ)
		rm -rf $(NAME)

re      : re all